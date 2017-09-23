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
		String c="";
		int t=Integer.parseInt(sc.nextLine());
		while(t--!=0)
		{
		    c="";
		    int f=0;
		    String a=sc.nextLine();
		    String b=sc.nextLine();
		    //System.out.println(a);
		    for(int i=0;i<a.length();i++)
		    {
		        c+=a.charAt(i);
		        
		        if(b.contains(c))
		        {
		            f=1;
		            break;
		        }
		        c="";
		    }
		    if(f==1)
		    System.out.println("Yes");
		    else
		    System.out.println("No");
		}
	}
}
