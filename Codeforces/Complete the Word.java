import java.util.*;
import java.lang.*;
import java.io.*;

public class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
Scanner sc =new Scanner(System.in);
String s=sc.nextLine();
if(s.length()<26){
System.out.println("-1");
return;}
int ar[]=new int[26];
for(int i=0;i<26;i++)
ar[i]=0;
int start=0;
for(int i=0;i<=s.length()-26;i++)
{
    int flag=0;
    for(int j=i;j<i+26;j++){
        if(s.charAt(j)!='?'){
        if(ar[s.charAt(j)-65]<2)
        ar[s.charAt(j)-65]++;
        else
        break;}}
        /*for(int j=0;j<26;j++)
        System.out.print(ar[j]+" ");
        System.out.println();*/
        for(int j=0;j<26;j++)
    {if(ar[j]>1)
   // System.out.println(ar[j]);
    flag=1;}
    //System.out.println(flag);
    if(flag==0)
    {start=i;break;}
    else if(i==s.length()-26)
   { System.out.println("-1");return;}
    for(int j=0;j<26;j++)
    ar[j]=0;
}
/*for(int j=0;j<26;j++)
{
    System.out.print(ar[j]);
   
}*/
//System.out.println(start);
for(int i=0;i<start;i++)
{
    if(s.charAt(i)=='?')
    System.out.print("A");
    else
    System.out.print(s.charAt(i));
}
for(int i=start;i<start+26;i++){
    if(s.charAt(i)=='?'){
        for(int j=0;j<26;j++){
            //System.out.println(ar[j]);
            if(ar[j]==0)
            {
                
                System.out.print((char)(j+65));
                ar[j]=1;
                break;
            }
            
        }
    }
    else
    System.out.print(s.charAt(i));
}
for(int i=start+26;i<s.length();i++)
{
    if(s.charAt(i)=='?')
    System.out.print("A");
    else
    System.out.print(s.charAt(i));
}
	}
}