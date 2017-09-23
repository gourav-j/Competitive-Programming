/**
 * Definition for an interval.
 * public class Interval {
 *     int start;
 *     int end;
 *     Interval() { start = 0; end = 0; }
 *     Interval(int s, int e) { start = s; end = e; }
 * }
 */
public class Solution {
    public ArrayList<Interval> merge(ArrayList<Interval> intervals) {
        ArrayList<Interval> result = new ArrayList<>();
        if(intervals.size()<=1)
        return intervals;
        Collections.sort(intervals,new Comp());
        Interval x=intervals.get(0);
        int start=x.start;
        int end=x.end;
        for(int i=1;i<intervals.size();i++){
            x=intervals.get(i);
            if(x.start<=end){
                end=Math.max(x.end,end);
            }else{
                result.add(new Interval(start,end));
                start=x.start;
                end=x.end;
            }
        }
        result.add(new Interval(start,end));
        return result;
    }
}
class Comp implements Comparator{
        public int compare(Object o1, Object o2){
            Interval i1 = (Interval)o1;
            Interval i2 = (Interval)o2;
            return i1.start - i2.start;
        }
}