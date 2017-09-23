import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    void solve(InputReader in,PrintWriter out)throws IndexOutOfBoundsException
    {
        int n=in.nextInt();
        int c=0;
        int a[][]=new int[501][501];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++){
                a[i][j]=in.nextInt();
                if(a[i][j]==1)
                c++;
            }
        }
        if(n==1)
        out.println(0);
        else if(c<=n)
        out.println(0);
        else if(c==n*n)
        out.println(n-1);
        else
        {
            int z=n,i=0;c=c-n;
            for( i=1;i<n;i++){
                c=c-2*(z-1);
                z--;
                if(c<=0)
                break;
            }
            if(c<=0)
            out.println(i);
            else
            out.println(i-1);
        }
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
