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
		int t=Integer.parseInt(sc.nextLine());
		
		while(t--!=0)
		{
		    int score=0;
		    int activity=sc.nextInt();
		    String origin=sc.nextLine().trim();
		    while(activity--!=0)
		    {
		        String s=sc.next();
		        if(s.equals("CONTEST_WON"))
		        {
		            score+=300;
		            int f=Integer.parseInt(sc.nextLine().trim());
		            if(f<=20)
		            score+=20-f;
		        }
		        else if(s.equals("BUG_FOUND"))
		        {
		          int f=Integer.parseInt(sc.nextLine().trim());  
		          score+=f;
		        }
		        else if(s.equals("TOP_CONTRIBUTOR")){
		            score+=300;
		        }
		        else if(s.equals("CONTEST_HOSTED")){
		            score+=50;
		        }
		    }
		    if(origin.equals("INDIAN"))
		    System.out.println(score/200);
		    else
		    System.out.println(score/400);
		}
	}
}
