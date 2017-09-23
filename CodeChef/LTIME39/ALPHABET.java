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
		Scanner sc=new Scanner(System.in);
	    String s=sc.nextLine();
	    int n=Integer.parseInt(sc.nextLine());
	    char c[]=new char[26];
	    for(int i=0;i<s.length();i++)
	    c[i]=s.charAt(i);
	    int flag=0,j;
	    while(n--!=0){
	        String w=sc.nextLine();
	        for(int i=0;i<w.length();i++)
	        {
	             flag=0;
	             
	            for( j=0;j<s.length();j++)
	            {
	                
	                if(w.charAt(i)==c[j])
	                {flag=1;break;}
	            }
	            if(flag==0)
	            {System.out.println("No");break;}
	        }
	        if(flag==1)
	        System.out.println("Yes");
	    }
	}
}
