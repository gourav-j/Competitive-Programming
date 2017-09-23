/******************gourav_j**************/
 /***********This code belongs to me**************/
import java.util.*;
import java.lang.*;
import java.io.*;
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    long x,y;boolean prime[]=new boolean[1000008];
    int primeFact[][]=new int[100005][45];
    int cnt[]=new int[100005];
    long ar[]=new long[100005];
    void seive(){
        for(int i=1;i<=1000005;i++)
        prime[i]=true;
        for(int i=2;i<=1000005;i++)
        {
            if(prime[i]==true)
            for(int j=2*i;j<=1000005;j=j+i)
            prime[j]=false;
        }
    }
    
    void solve(InputReader in,PrintWriter out)throws IndexOutOfBoundsException
    {
        x=in.nextLong();
        y=in.nextLong();
        seive();
        for(long i=0;i<y-x+1;i++)
        ar[(int)i]=x+i;
        long j,ans=0;
        for(long i=2;i*i<=y;i++){
            j=1;
            if(x>i*i)
            j=x/i;
            for(;j*i<=y;j++){
                long a=j*i-x;
                if(j*i>=x)
	            {
	                if(ar[(int)a]%i==0){
    	                while(ar[(int)a]%i==0){
    	                    primeFact[(int)a][cnt[(int)a]]++;
    	                    ar[(int)a]=ar[(int)a]/i;
    	                }
    	                cnt[(int)a]++;
	                }
	            }
            }
        }
        /*for(i=0;i<=12;i++){
	    for(j=0;j<=5;j++)
	    .out.print(arr[(int)i][(int)j]+" ");
	    .out.println(i);
	    }*/
	    long f=1,z=0;
	    for(long k=0;k<y-x+1;k++){
	       if(ar[(int)k]!=1)
	          primeFact[(int)k][cnt[(int)k]++]=1;
	          
	           if(cnt[(int)k]==0)
	            continue;
            int t[]=new int[45];
            int mx=0;
            f=1;z=0;
            for(int i=0;i<cnt[(int)k];i++){
                mx=Math.max(primeFact[(int)k][i]+1,mx);
                t[primeFact[(int)k][i]+1]++;
                f*=(primeFact[(int)k][i]+1);
            }z=z+f;
            for(int i=mx;i!=1;){
                f=f/i;
                t[i-1]++;
                t[i]--;
                f=f*(i-1);
                if(t[i]==0)
                i--;
                z+=f;
            }
        /***gourav_j**/
            ans+=z-1;
	    }
	    out.println(ans);
    }
    public static void main(String[] args) {
		InputReader in = new InputReader(System.in);
		PrintWriter out = new PrintWriter(System.out);
		Codechef obj=new Codechef();
		//for (int T = in.nextInt(); T > 0; T--) 
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
