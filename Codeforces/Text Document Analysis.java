import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
public class Codechef
{
    public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=Integer.parseInt(sc.nextLine());
		String s=sc.nextLine();
		Codechef obj=new Codechef();
		int count=obj.numberOfWords(s);
	
		int longest=obj.longestWord(s);
			System.out.println(longest+" "+count);
	}
	public int numberOfWords(String s){
	    s=s.toUpperCase();int count=0,flag=0;
	    for(int i=0;i<s.length();i++){
	        char c=s.charAt(i);
	        if(c=='('){
	            while(c!=')')
	            {
	                flag=0;
	                 while(true){
	                    i++;
	                    if(i<s.length())
	                    c=s.charAt(i);
	                    else 
	                    break;
	                    if(c>=65&&c<=90)
	                    {flag=1;continue;}
	                    else 
	                    break;
	            }
	            if(flag==1)
	            count++;
	        }
	    }
	}
	return count;}
	public int longestWord(String s){
	    s=s.toUpperCase();int count=0,p=0;
	    for(int i=0;i<s.length();i++){
	        count=0;
	        char c=s.charAt(i);
	        if(c=='('){
	            while(c!=')')
	            {
	                i++;
	                c=s.charAt(i);
	            }
	        }
	        else if(c>=65&&c<=90){
	            while(true){
	                i++;
	                count++;
	                if(i<s.length())
	                c=s.charAt(i);
	                else 
	                break;
	                if(c>=65&&c<=90)
	                continue;
	                else break;
	            }
	            
	            if(count>p)
	            p=count;
	            i--;
	        }
	    }
	    return p;
	}
}