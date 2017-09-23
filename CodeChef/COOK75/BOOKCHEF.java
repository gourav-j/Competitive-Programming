import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    void solve(InputReader in,PrintWriter out)throws IndexOutOfBoundsException
    {
        int i;
           int n=in.nextInt();
           int m=in.nextInt();
           int ar[]=new int[n+1];
           String br[][]=new String[100005][3];
           for(i=0;i<=100004;i++)
           {
               br[i][0]="";br[i][1]="";
               br[i][2]="";
           }
           for(i=0;i<n;i++)
           ar[i]=in.nextInt();
           for(i=0;i<m;i++){
               int f=in.nextInt();
               int p=in.nextInt();
               String s=in.next();
               br[p][0]=f+"";
               br[p][1]=p+"";
               br[p][2]=s;
           }
           int j=0,k;String z="",x="";
           for(i=0;i<=100004;i++)
           {j=0;
               for(k=0;k<n;k++){
               if(br[i][0]!="")
               if(Integer.parseInt(br[i][0])==ar[k])
               {x=br[i][2]+"\n"+x;j=1;}}
               if(j==0) {
                   if(br[i][2]!="")
                   z=br[i][2]+"\n"+z;
               }}
               out.println(x+z);
               
           
    }
    public static void main(String[] args) {
		InputReader in = new InputReader();
		PrintWriter out = new PrintWriter(System.out);
		Codechef obj=new Codechef();
		
			obj.solve(in, out);
		
		out.close();
	}
}
class InputReader {
	private InputStream stream = System.in;
	private byte[] buf = new byte[1024];
	private int curChar;
	private int numChars;
	public int read() {
		if (curChar >= numChars) {
			curChar = 0;
			try {
				numChars = stream.read(buf);
			} catch (IOException e) {}
			if (numChars <= 0)
				return -1;
		}
		return buf[curChar++];
	}
	public int nextInt() {
		int c = read();
		while (isSpaceChar(c))
			c = read();
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
	public boolean isSpaceChar(int c) {
		return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
	}
	public long nextLong() {
		int c = read();
		while (isSpaceChar(c))
			c = read();
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
	public String next() {
		int c = read();
		while (isSpaceChar(c))
			c = read();
		StringBuilder res = new StringBuilder();
		do {
			res.appendCodePoint(c);
			c = read();
		} while (!isSpaceChar(c));
		return res.toString();
	}
	public char nextChar() {
    	int c = read();
    	while (isSpaceChar(c))
                c = read();
    	return (char) c;
	}
}
