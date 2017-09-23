import java.util.*;import java.io.*;
public class Solution {
    public ArrayList<Integer> flip(String A) {
    int i,p=0,x=0,y=0,max=0,flag=0,mx=0;
    for( i=0;i<A.length();i++){
        if(A.charAt(i)=='0')
        {
            mx++;
            if(max<mx){
                max=mx;
                y=i;x=p;
                flag=1;
            }
        }
            else{
                if(mx==0){
                    p=i+1;
                }
                else
                mx--;
            }
        
    }
       ArrayList<Integer> ans=new ArrayList<Integer>();
       if(flag==1){
       ans.add(0,x+1);ans.add(1,y+1);}
       return ans;
    }
}
