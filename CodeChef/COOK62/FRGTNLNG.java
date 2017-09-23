import java.util.*;
class first
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int z,n,k,i,f=0,j;
String s;
z=sc.nextInt();
while(z--!=0)
{
n=sc.nextInt();
k=Integer.parseInt(sc.next());
String y=sc.nextLine();
String t[]=new String[k];
s=sc.nextLine();
for(i=0;i<k;i++)
{
t[i]=sc.nextLine();
}
String p[]=s.split("[ ]");
for(i=0;i<n;i++)
{f=0;
for(j=0;j<k;j++)
{
if(t[j].contains(p[i]))
f=1;
}
if(f==1)
System.out.print("YES ");
else
System.out.print("NO ");
}
System.out.println();
}
}
}
