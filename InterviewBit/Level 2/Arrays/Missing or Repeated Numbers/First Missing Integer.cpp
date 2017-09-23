int Solution::firstMissingPositive(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int j=0,n=A.size(),temp;
    for(int i=0;i<n;i++){
        if(A[i]<0){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            j++;
      
        }
    }
   // cout<<j;
    for(int i=j;i<n;i++){
        if(abs(A[i])-1<n-j&&A[abs(A[i])-1+j]>0)
        A[abs(A[i])-1+j]=-A[abs(A[i])-1+j];
    }
    int i;
    for( i=0;i<n;i++){
       
    if(A[i]>0)
    break;
    }
    return (i-j+1);
}
