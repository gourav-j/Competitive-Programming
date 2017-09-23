/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory for result array, and fill result's length in length_of_array
 */
int* repeatedNumber(const int* A, int n1, int *length_of_array) {
	// SAMPLE CODE
        
         *length_of_array = 2; // length of result array
         int *result = (int *) malloc(*length_of_array * sizeof(int));
            int i,s,c=A[0],x=0,y=0,n=n1;
    for ( i=1;i<n;i++)
    c=c ^ A[i];
    for( i=1;i<=n;i++)
    c=c ^ i;
     s=c & ~ (c-1);
    for( i=0;i<n;i++){
        if( A[i] & s)
        x= x ^ A[i];
        else 
        y=y ^ A[i];
    }
    for( i=1;i<=n;i++){
        if(i & s)
        x= x ^ i;
        else
        y= y ^ i;
    }
    for( i=0;i<n;i++){
        if(y==A[i])
        {
            result[0]=y;result[1]=x;return result;
        }
    }
    result[1]=y;result[0]=x;
         
         return result;
        
}
