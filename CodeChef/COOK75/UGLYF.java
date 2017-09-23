import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    void solve(InputReader in,PrintWriter out)throws IndexOutOfBoundsException
    {
           String s=in.next();
           String t=in.next();
           int ar[]=new int[27];
           for(int i=0;i<27;i++)
           ar[i]=0;
           for(int i=0;i<s.length();i++)
           ar[s.charAt(i)-65]=1;
           for(int i=0;i<t.length();i++)
           if(ar[t.charAt(i)-65]==1)
           ar[t.charAt(i)-65]=2;
           int pos1=0,pos2=0,min=0,x=0,y=0,g=-1,h=-1,z=0;
           for(int i=0;i<27 ;i++)
           {
               pos1=0;pos2=0;g=-1;h=-1;x=0;y=0;
               if(ar[i]==2)
               while(true)
               {
                   if(x!=-1)
                   x=s.indexOf(i+65,g+1);
                   if(y!=-1)
                   y=t.indexOf(i+65,h+1);
                   if(x!=-1)
                   if(Math.abs(s.length()/2-x)<Math.abs(s.length()/2-pos1))
                   pos1=x;
                   if(y!=-1)
                   if(Math.abs(t.length()/2-y)<Math.abs(t.length()/2-pos2))
                   pos2=y;
                   g=x+1;h=y+1;
                   if(x==-1&&y==-1)
                   break;
                }
                //out.println(" "+pos1+" "+pos2);
               z=Math.abs(s.substring(0,pos1).length()-t.substring(pos2+1,t.length()).length())+Math.abs(t.substring(pos2+1,t.length()).length()-s.substring(pos1+1,s.length()).length())+Math.abs(s.substring(pos1+1,s.length()).length()-t.substring(0,pos2).length())+Math.abs(t.substring(0,pos2).length()-s.substring(0,pos1).length());
               if(z<min)
               min=z;
               if(i==0)
               min=z;
               
           }
           out.println(min);
    }
    public static void main(String[] args) {
		InputReader in = new InputReader();
		PrintWriter out = new PrintWriter(System.out);
		Codechef obj=new Codechef();
		for (int T = in.nextInt(); T > 0; T--) {
			obj.solve(in, out);
		}
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
