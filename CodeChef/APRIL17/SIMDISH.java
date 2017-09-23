/******************gourav_j**************/
 /***********This code belongs to me**************/
import java.util.*;
import java.lang.*;
import java.io.*;
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    void solve(InputReader in,PrintWriter out)throws IndexOutOfBoundsException
    {
        String a[]=new String[4];
        String b[]=new String[4];
        int c=0;
        for(int i=0;i<4;i++)
        a[i]=in.readString();
        for(int i=0;i<4;i++)
        b[i]=in.readString();
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++){
                if(a[i].equals(b[j]))
                c++;
            }
        }
        if(c>=2)
        out.println("similar");
        else
        out.println("dissimilar");
    }
    public static void main(String[] args) {
		InputReader in = new InputReader(System.in);
		PrintWriter out = new PrintWriter(System.out);
		Codechef obj=new Codechef();
		for (int T = in.nextInt(); T > 0; T--) 
			obj.solve(in, out);
		
		out.close();
	}
}
 class InputReader {
    private final InputStream stream;
    private final byte[] buf = new byte[8192];
    private int curChar, snumChars;
    public InputReader(InputStream st) {
      this.stream = st;
    }
    public int read() {
      if (snumChars == -1)
        throw new InputMismatchException();
      if (curChar >= snumChars) {
        curChar = 0;
        try {
          snumChars = stream.read(buf);
        } catch (IOException e) {
          throw new InputMismatchException();
        }
        if (snumChars <= 0)
          return -1;
      }
      return buf[curChar++];
    }
    public int nextInt() {
      int c = read();
      while (isSpaceChar(c)) {
        c = read();
      }
      int sgn = 1;
      if (c == '-') {
        sgn = -1;
        c = read();
      }
      int res = 0;
      do {
        res *= 10;
        res += c - '0';
        c = read();
      } while (!isSpaceChar(c));
      return res * sgn;
    }
    public long nextLong() {
      int c = read();
      while (isSpaceChar(c)) {
        c = read();
      }
      int sgn = 1;
      if (c == '-') {
        sgn = -1;
        c = read();
      }
      long res = 0;
      do {
        res *= 10;
        res += c - '0';
        c = read();
      } while (!isSpaceChar(c));
      return res * sgn;
    }
    public int[] nextIntArray(int n) {
      int a[] = new int[n];
      for (int i = 0; i < n; i++) {
        a[i] = nextInt();
      }
      return a;
    }
    
    public long[] nextLongArray(int n) {
      long a[] = new long[n];
      for (int i = 0; i < n; i++) {
        a[i] = nextLong();
      }
      return a;
    }
    
    public String readString() {
      int c = read();
      while (isSpaceChar(c)) {
        c = read();
      }
      StringBuilder res = new StringBuilder();
      do {
        res.appendCodePoint(c);
        c = read();
      } while (!isSpaceChar(c));
      return res.toString();
    }
    public String nextLine() {
      int c = read();
      while (isSpaceChar(c))
        c = read();
      StringBuilder res = new StringBuilder();
      do {
        res.appendCodePoint(c);
        c = read();
      } while (!isEndOfLine(c));
      return res.toString();
    }
    public boolean isSpaceChar(int c) {
      return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
    }
    private boolean isEndOfLine(int c) {
      return c == '\n' || c == '\r' || c == -1;
    }
  }
