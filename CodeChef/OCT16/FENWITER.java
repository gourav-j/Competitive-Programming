import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    long countSet(String s){
        long c=0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='1')
            c++;
        }
        return c;
    }
    void solve(InputReader in,PrintWriter out)throws IndexOutOfBoundsException
    {
         String l1=in.next();
         String l2=in.next();
         String l3=in.next();
         int n=Integer.parseInt(in.next());
         long temp=1;long f=0;
         for(int i=l3.length()-1;i>=0;i--){
             if(temp==0)
             break;
             if(l3.charAt(i)=='1')
             {
                 l3=l3.substring(0,i)+'0'+l3.substring(i+1,l3.length());
             }
             else
             {
                 l3=l3.substring(0,i)+'1'+l3.substring(i+1,l3.length());
                 temp=0;break;
             }
         }
         if(temp==0)
         f=countSet(l1)+n*countSet(l2)+countSet(l3);
         else{
             long z=countSet(l2);
             for(int i=l2.length()-1;i>=0;i--){
             if(temp==0)
             break;
             if(l2.charAt(i)=='1')
             {
                 l2=l2.substring(0,i)+'0'+l2.substring(i+1,l2.length());
             }
             else
             {
                 l2=l2.substring(0,i)+'1'+l2.substring(i+1,l2.length());
                 temp=0;break;
             }
         }
         if(temp==0)
         f=countSet(l1)+(n-1)*z+countSet(l2);
         else{
             for(int i=l1.length()-1;i>=0;i--){
             if(temp==0)
             break;
             if(l1.charAt(i)=='1')
             {
                 l1=l1.substring(0,i)+'0'+l1.substring(i+1,l1.length());
             }
             else
             {
                 l1=l1.substring(0,i)+'1'+l1.substring(i+1,l1.length());
                 temp=0;break;
             }
         }
         f=countSet(l1)+temp;
         }
         }
         out.println(f);
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
