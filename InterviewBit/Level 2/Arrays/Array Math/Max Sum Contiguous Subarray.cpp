int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m=INT_MIN,mx=0;
    for(int i=0;i<A.size();i++){
        mx=mx+A[i];
        if(m<mx)
        m=mx;
        if(mx<0)
        mx=0;
    }
    return m;
}
