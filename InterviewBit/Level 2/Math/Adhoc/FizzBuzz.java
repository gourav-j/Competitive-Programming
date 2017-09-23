import java.util.*;  
public class Solution {
    public ArrayList<String> fizzBuzz(int A) {
        ArrayList<String> ar=new ArrayList<String>();
        for(int i=1;i<=A;i++){
            if(i%3==0&&i%5==0)
            ar.add("FizzBuzz");
            else if(i%3==0)
            ar.add("Fizz");
            else if(i%5==0)
            ar.add("Buzz");
            else
            ar.add(""+i);
        }
        return ar;
    }
}
