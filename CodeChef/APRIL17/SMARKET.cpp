/******************gourav_j**************/
 /***********This code belongs to me**************/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define BLOCK 316 // ~sqrt(N)
struct node {
	int L, R, i,k;
}q[100005];
int ans[100005],f[100005],answer,cnt[100005],h[100005];
bool cmp(node x, node y) {
	if(x.L/BLOCK != y.L/BLOCK) {
		// different blocks, so sort by block.
		return x.L/BLOCK < y.L/BLOCK;
	}
	// same block, so sort by R value
	return x.R < y.R;
}
void pre_process(int ar[],int n){
    memset(f,0,sizeof f[0]*n);
    memset(h,0,sizeof f[0]*n);
    f[0]=1;
    for(int i=1;i<n;i++){
        //cout<<ar[0]<<" "<<ar[i-1];
        if(ar[i]==ar[i-1])
        f[i]=f[i-1]+1;
        else
        f[i]=1;
        //cout<<f[i];
    }
    f[n]=0;
    int j=0,b,k=0;
    for(int i=0;i<=n;i++){
    	b=i;
    	if(f[i]<f[i+1]){
    	while(f[i]<f[i+1]){
    		i++;
    	}
    	for(int j=i;j>=b;j--){
    		h[k]=f[j];k++;
    	}
    	}
    	else
    	h[k++]=f[i];
    	//cout<<f[i];
    }
    /*cout<<endl;
    for(int i=0;i<n;i++)
    cout<<h[i]<<" ";
    cout<<endl;*/
}
void addLeft(int position,int k) {
	cnt[h[position]]++;
	//if(f[position] >=k) {
		answer=cnt[k];
	//}
}
void removeLeft(int position,int k) {
	cnt[h[position]]--;
	//if(f[position] <k) {
		answer=cnt[k];
	//}
}
void addRight(int position,int k) {
	cnt[f[position]]++;
	//if(f[position] >=k) {
		answer=cnt[k];
	//}
}
void removeRight(int position,int k) {
	cnt[f[position]]--;
	//if(f[position] <k) {
		answer=cnt[k];
	//}
}
int main() {
	// your code goes here
    ios::sync_with_stdio(false);
    int t,n,Q,ar[100005];
    cin>>t;
    while(t--){
        cin>>n>>Q;
        for(int i=0;i<n;i++)
            {cin>>ar[i];cnt[i]=0;}
        pre_process(ar,n);
        for(int i=0;i<Q;i++)
        {cin>>q[i].L>>q[i].R>>q[i].k;q[i].L--;q[i].R--;q[i].i=i;}
        sort(q, q + Q, cmp);
        int currentL = 0, currentR = 0;
	for(int i=0; i<Q; i++) {
		int L = q[i].L, R = q[i].R,x=q[i].k;
		//cout<<L<<" p"<<R<<endl;
		while(currentL > L) {
			//cout<<"A\n";
			addLeft(currentL-1,x);
			currentL--;
		}
		while(currentR <= R) {
			//cout<<"b\n";
			addRight(currentR,x);
			currentR++;
		}
		while(currentL < L) {
			//cout<<"C\n";
			removeLeft(currentL,x);
			currentL++;
		}
		while(currentR > R+1) {
			//cout<<"D\n";
			removeRight(currentR-1,x);
			currentR--;
		}
		answer=cnt[x];
		ans[q[i].i] = answer;
		/*cout<<L+1<<" "<<R+1<<" "<<x<<" "<<answer<<endl;
		for(int i=0;i<n;i++)
		cout<<cnt[i]<<" ";
		cout<<endl;*/
	}
    for(int i=0; i<Q; i++)
		printf("%d\n", ans[i]);
    }
	return 0;
}
