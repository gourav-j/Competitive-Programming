public class Solution {
	public String convertToTitle(int a) {
	   String s="";int i=0,r;
    while(a>0){
        r=a%26;
        if(r==0)
        r=26;
        s=((char)(r+64))+s;
        a=(a-r)/26;
    }
    return s;
	}
}
