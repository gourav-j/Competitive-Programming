public class Solution {
    int reverse(int n){
        int sum=0,r;
        while(n>0){
            r=n%10;sum=sum*10+r;n=n/10;
        }
        return sum;
    }
	public boolean isPalindrome(int a) {
	    if(a==reverse(a))
	    return true;
	    else 
	    return false;
	}
}
