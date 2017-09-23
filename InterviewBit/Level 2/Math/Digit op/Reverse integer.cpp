int Solution::reverse(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int flag=0;
    if(A<0)
    flag=1;
    A=abs(A);
    
    long long  sum=0,r;
    while(A>0){
        r=A%10;sum=sum*10+r;A/=10;
    }
    if(sum>INT_MAX)
    return 0;
    if(flag==1)
    return -sum;
    return sum;
}
