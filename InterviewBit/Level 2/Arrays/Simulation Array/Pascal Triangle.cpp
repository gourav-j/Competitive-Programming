
vector<vector<int> > Solution::generate(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<int> > ans;
    ans.resize(A);
    if(A<=0)
    return ans;
    ans[0].push_back(1);
     if(A==1)
    return ans;
    ans[1].push_back(1);
    ans[1].push_back(1);
    for(int i=2;i<A;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i)
            ans[i].push_back(1);
            else
            ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
        }
    }
    return ans;
}
