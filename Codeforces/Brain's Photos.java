/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
	Scanner br=new Scanner (System.in);
int i,j,m,n;
n=Integer.parseInt(br.next());
m=Integer.parseInt(br.nextLine().trim());
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	char ar=br.next().trim().charAt(0);
	if(ar=='C'||ar=='M'||ar=='Y'){
System.out.println("#Color");
return;}
	}
String s=br.nextLine();
}
System.out.println("#Black&White");
}}