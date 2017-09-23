import java.io.*;
import java.util.*;
class Chefrout
{
 public static void main(String args[])
 {
  Scanner obj = new Scanner(System.in);
  int t = obj.nextInt();
  String str;
  int si,c,e,s;
  for(int ii=0;ii<t;ii++)
  {
   str = obj.next();
   c=0;
   e=0;
   s=0;
   si=0;
   outer:
   for(int i=0;i<str.length();i++)
   {
	if(str.charAt(i)=='C')
    {
	 c++;
	 if(s!=0 || e!=0)
     {
	  si++;
	  break outer;
     }		 
    }
    else if(str.charAt(i)=='E')
    {
	 e++;
     if(s!=0)
	 {
	  si++;
      break outer;	  
	 }
    }
    else
    {
	 s++;
    }		
   }
   if(si==0)
	 System.out.println("yes");
   else
	 System.out.println("no");  
  }
 }
}
