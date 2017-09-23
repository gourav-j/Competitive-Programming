#include <bits/stdc++.h>
#define PB push_back
using namespace std;
bool isHypotenuse[5000010];
bool isPrime[5000010];
vector<int> primes;
int lim=5000000;
void pre_process(){
    
    int p;
    
    memset(isPrime, true, sizeof(isPrime));
    
    isPrime[0] = false; isPrime[1] = false; isPrime[2] = true;
    
    for(int i = 2; i*i <= lim; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= lim; j += i) isPrime[j]=false;
        }
    }
    
    for(int i = 2; i <= lim; i++){
        if(isPrime[i] && i % 4 == 1) primes.PB(i);
    }
    
    for(int i=0;i<primes.size();i++){
        p = primes[i];
        for(int j = p; j <= lim; j+= p) isHypotenuse[j] = true;
    }
}
int main()
{
    int Q, N;
    pre_process();
    
    scanf("%d", &Q);
    assert(1 <= Q && Q <= 1e6);
    
    while(Q--){
        
        scanf("%d", &N);
        assert(N >= 1 && N <= 5e6);
        
        if(isHypotenuse[N]) printf("YES\n");
        else printf("NO\n");
        
    }
    return 0;
}
