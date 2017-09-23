int Solution::titleToNumber(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ans=0;
    
    for(int i=0;i<A.size();i++){
        if(i==0)
        ans=A[i]-64;
        else
        ans=ans*26+A[i]-64;
    }
    return ans;
}