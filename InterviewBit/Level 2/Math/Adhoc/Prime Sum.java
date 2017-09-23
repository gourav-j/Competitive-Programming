public class Solution {
    public ArrayList<Integer> primesum(int a) {
        boolean prime[] = new boolean[a+1];
        for(int i=0;i<a;i++)
            prime[i] = true;
         
        for(int p = 2; p*p <=a; p++)
        {
            if(prime[p] == true)
            {
                for(int i = p*2; i <= a; i += p)
                    prime[i] = false;
            }
        }
        ArrayList <Integer> ans=new ArrayList<Integer>();
        for(int i=2;i<=a/2;i++){
            if(prime[i]&&prime[a-i])
            {
                ans.add(i);ans.add(a-i);break;
            }
        }
        return ans;
    }
    
}
