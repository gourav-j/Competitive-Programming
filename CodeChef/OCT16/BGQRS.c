#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define MAX 100000
long long l,r,a[100005],segtree2[400005],div2[100005],div5[100005],segtree5[400005],numof2[100005],numof5[100005];
static long long j=1;
long long min(long long a, long long b){
    if(a<b)
    return a;
    else
    return b;
}
long long finddiv(long long x,long long div)
{
    long long z=0;
    while(x && x%div==0){   
        z++;
        x/=div;
    }
    return z;
}    
 long long query(long long node, long long start, long long end, int flag)
{
    if(r < start || end < l)
    {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start && end <= r)
    {
        // range represented by a node is completely inside the given range
        if(flag==2)
        return segtree2[node];
        else if(flag==5)
        return segtree5[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    long long mid = (start + end) / 2;
    long long p1 = query(2*node, start, mid,flag);
    long long p2 = query(2*node+1, mid+1, end,flag);
    return (p1 + p2);
}
    void updateRange(long long node, long long start, long long end, long long val2,long long val5,long long type,long long x)
{
    
    // out of range
    if (start > end || start > r || end < l)
       return;
    // Current node is a leaf node
    if (start == end)
    {
        // Add the difference to current node
        if(type==1){
        segtree2[node] += val2;
        segtree5[node] += val5;
        }
        else if(type==2){
            segtree2[node]=val2+numof2[j];
            segtree5[node]=val5+numof5[j];
            j++;
        }
        return;
    }
    // If not a leaf node, recur for children.
    long long mid = (start + end) / 2;
    updateRange(node*2, start, mid, val2,val5,type,x);
    updateRange(node*2 + 1, mid + 1, end, val2,val5,type,x);
    // Use the result of children calls to update this node
    segtree2[node] = segtree2[node*2] + segtree2[node*2+1];
    segtree5[node] = segtree5[node*2] + segtree5[node*2+1];
}
 
    void build(long long node, long long start, long long end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        segtree2[node] = div2[start];
        segtree5[node] = div5[start];
    }
    else
    {
        long long mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        segtree2[node] = segtree2[2*node] + segtree2[2*node+1];
        segtree5[node] = segtree5[2*node] + segtree5[2*node+1];
    }
}
int main(void) {
	// your code goes here
	long long t,n,m,i,type,x,d2,d5,ans2=0,ans5=0,count=0;
	scanf("%lld",&t);
	for(i=1;i<=MAX;++i){
        int temp= i;
        
        d2= finddiv(temp,2);
        d5= finddiv(temp,5);
        
        numof2[i]=d2;
        numof5[i]=d5;
    }
	while(t--){
	    count=0;
	    scanf("%lld%lld",&n,&m);
	    for(i=1;i<=n;i++)
	    {scanf("%lld",&a[i]);
	    div2[i]=finddiv(a[i],2);
	    div5[i]=finddiv(a[i],5);
	    }
	    build(1,1,n);
	    while(m--){
	        scanf("%lld%lld%lld",&type,&l,&r);
	        if(type==1)
	        {
	            scanf("%lld",&x);
	            d2=finddiv(x,2);
	            d5=finddiv(x,5);
	            
	            updateRange(1,1,n,d2,d5,type,x);
	      
	        }
	        else if(type==2)
	        {
	            scanf("%lld",&x);
	            d2=finddiv(x,2);
	            d5=finddiv(x,5);
	            j=1;
	            updateRange(1,1,n,d2,d5,type,x);
	        }
	        else if(type==3)
	        {
	            ans2=query(1,1,n,2);
	            ans5=query(1,1,n,5);
	            count+=min(ans2,ans5);
	           
	        }
	    }
	    printf("%lld\n",count);
	}
	return 0;
}
