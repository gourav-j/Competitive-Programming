public class Solution {
	public ArrayList<Integer> plusOne(ArrayList<Integer> a) {
	    ArrayList<Integer> ans=new ArrayList<>();
	    
	    for(int i=a.size()-1;i>=0;i--){
	        if(a.get(i)==9)
	        a.set(i,0);
	        else
	        {
	            a.set(i,a.get(i)+1);
	            
	            break;
	        }
	    }
	     int i;
	        for( i=0;i<a.size();i++){
	            if(a.get(i)!=0)
	            break;
	        }
	        for(int j=i;j<a.size();j++)
	        {
	            ans.add(a.get(j));
	        }
	        return ans;
	}
}
