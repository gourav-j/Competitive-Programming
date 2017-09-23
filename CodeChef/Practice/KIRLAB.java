import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    int MAX=10000007;
    boolean v[]=new boolean[MAX];
    int  sp[]=new int[MAX];
    public static void main(String[] args) {
		InputReader in = new InputReader();
		PrintWriter out = new PrintWriter(System.out);
		Codechef obj=new Codechef();
		obj.Sieve();
		for (int T = in.nextInt(); T > 0; T--) {
			obj.solve(in, out);
		}
		out.close();
	}
    public void Sieve(){
	for (int i = 2; i < MAX; i += 2)	sp[i] = 2;
	for (int i = 3; i < MAX; i += 2){
		if (!v[i]){
			sp[i] = i;
			for (long j = i; (j*i) < MAX; j += 2){
				if (!v[(int)j*i]){	v[(int)j*i] = true; sp[(int)j*i] = i;}
			    }
		    }
	    }
    }
    void solve(InputReader in,PrintWriter out)throws IndexOutOfBoundsException
    {
        int n=in.nextInt();
        int br,k=0,tmp=0;int max=0;
        int factors[]=new int[MAX];
        int hash[]=new int[MAX];
        for(int i=0;i<n;i++)
        {
            k=0;tmp=0;
            br=in.nextInt();
            while(br!=1){
                
                    factors[k++]=sp[br];
                    tmp=Math.max(tmp,hash[factors[k-1]]);
                br=br/sp[br];
            }
            
            /*
            for(int j=1;j<k;j++)
                max=Math.max(max,hash[factors[j]]);*/
            for(int j=0;j<k;j++)
                hash[factors[j]]=tmp+1;
                max=Math.max(tmp+1,max);
        }
        /*int max=hash[factors[0]];
        for(int j=1;j<MAX;j++)
        {
            max=Math.max(max,hash[factors[j]]);
        }*/
        out.println(max);
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
