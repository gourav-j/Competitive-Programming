/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void arrange(int* a, int n1) {
    int i;
    for( i=0;i<n1;i++){
	        a[i]=a[i]+(a[a[i]]%n1)*n1;
	        //printf("%d ",a[i]);
	    }
	    for( i=0;i<n1;i++){
	        a[i]/=n1;
	    }
}
