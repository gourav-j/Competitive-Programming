#define MOD 1000000007
int Solution::hammingDistance(const vector<int> &A) {
   long long  ans=0;
    for(int i=0;i<=31;i++){
        long long b=0,a=0;
        for(int j=0;j<A.size();j++){
                if(A[j]&1<<i)
                b++;
                else
                a++;
                
        }
        ans=(ans+(a*b)%MOD)%MOD;
    }
    ans=(ans*2)%MOD;
    return ans;
}
