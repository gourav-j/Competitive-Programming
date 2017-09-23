int Solution::solve(vector<int> &A) {
    vector<int>p;
    sort(A.begin(),A.end());
    int n=A.size();
    for (int i=0; i<n-1; i++)
        {
            if (A[i] == A[i+1])
                continue;
 
            // In case of duplicates, we
            // reach last occurrence here.
            if (A[i] == n-i-1)
                return 1;
        }
 
        if (A[n-1] == 0)
            return 1;
 
        return -1;

}