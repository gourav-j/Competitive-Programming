/* package codechef; // don't place package name! */
import java.util.*;
import java.lang.*;
import java.io.*;
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s=br.readLine(),g="";
		int c=0,i;
		s=s+" ";
		for(i=0;i<s.length();i++)
		{
		    if(s.charAt(i)!=' ')
		    g+=s.charAt(i);
		    else
		    {
		        
		        if(g.length()>1&&g.toUpperCase().equals(g))
		        c++;
		        g="";
		    }
		}
		System.out.println(c);
	}
}
