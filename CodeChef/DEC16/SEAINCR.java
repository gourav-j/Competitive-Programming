import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    int max_lis_length; // stores the final LIS
    void solve(InputReader in,PrintWriter out)throws IndexOutOfBoundsException
    {
        int n=in.nextInt();
        int m=in.nextInt();
        int ar[]=new int[n];
        for(int i=0;i<n;i++)
        ar[i]=in.nextInt();
        while(m--!=0){
            int l=in.nextInt();
            int r=in.nextInt();
            int br[]=new int[r-l+1];
            int k=0;
            for(int i=l-1;i<r;i++)
            br[k++]=ar[i];
            out.println(LIS(br,br.length));
        }
        
    }
    
 
// Recursive implementation for calculating the LIS
int _lis(int arr[], int n)
{
   
    if (n == 1)
        return 1;
 
    int current_lis_length = 1;
    for (int i=1; i<n-1; i++)
    {
        
        int subproblem_lis_length = _lis(arr, i);
 
       
        if (arr[i] < arr[n-1] &&
            current_lis_length < (1+subproblem_lis_length))
            current_lis_length = 1+subproblem_lis_length;
    }
    if (max_lis_length < current_lis_length)
        max_lis_length = current_lis_length;
 
    return current_lis_length;
}
 int lis(int arr[], int n)
{    
    max_lis_length = 1; 
    _lis( arr, n );
 
    return max_lis_length;
}
 
    
    int CeilIndex(int A[], int l, int r, int key)
    {
        while (r - l > 1)
        {
            int m = l + (r - l)/2;
            if (A[m]>=key)
                r = m;
            else
                l = m;
        }
 
        return r;
    }
    int LIS(int A[], int size)
    {
        if(size == 1)
        return 1;
        
        int[] tailTable   = new int[size];
        int len; // always points empty slot
        
        tailTable[0] = A[0];
        len = 1;
        for (int i = 1; i < size; i++)
        {
            if (A[i] < tailTable[0])
                // new smallest value
                tailTable[0] = A[i];
 
            else if (A[i] > tailTable[len-1])
                // A[i] wants to extend largest subsequence
                tailTable[len++] = A[i];
 
            else
                // A[i] wants to be current end candidate of an existing
                // subsequence. It will replace ceil value in tailTable
                tailTable[CeilIndex(tailTable, -1, len-1, A[i])] = A[i];
        }
 
        return len;
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
