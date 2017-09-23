import java.util.*;
class cal
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=Integer.parseInt(sc.nextLine());
        while(t--!=0)
        {
            int x=0,i;
            long max=0;
            int n=Integer.parseInt(sc.nextLine());
            String a=sc.nextLine();
            String b=sc.nextLine();
            long w[]=new long[n+1];
            for(i=0;i<n;i++)
            {
                w[i]=Integer.parseInt(sc.next());
            }
            w[n]=Integer.parseInt(sc.nextLine().trim());
            if(a.equals(b))
            {
                System.out.println(w[n]);
                continue;
            }
            for(i=0;i<a.length();i++)
            {
                if(a.charAt(i)==b.charAt(i))
                {
                    x++;
                }
            }
            for(i=0;i<=x;i++)
            {
                if(w[i]>=max)
                max=w[i];
            }
            System.out.println(max);
        }
    }
}
