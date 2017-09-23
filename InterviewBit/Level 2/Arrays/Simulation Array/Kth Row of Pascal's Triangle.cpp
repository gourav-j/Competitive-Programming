vector<int> Solution::getRow(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int x=1;
    A++;
    vector<int> ans;
    for(int i=1;i<=A;i++){
        ans.push_back(x);
        x=x*(A-i)/i;
    }
    return ans;
}
