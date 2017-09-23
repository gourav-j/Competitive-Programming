#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n,t,k,ar[15],br[15];
	cin>>t;
	while(t--){
	cin>>n>>k;
	for(int i=0;i<n;i++)
	
	    cin>>ar[i]>>br[i];
	
	int f=0,amt=0;
	    for(int i=0;i<n;i++)
	    
	    {
	        f+=ar[i];
	        if(f<=k)
	        continue;
	        else
	        {amt+=(f-k)*br[i];k=f;}
	    }
	    cout<<amt<<"\n";
	}
	
	return 0;
}
