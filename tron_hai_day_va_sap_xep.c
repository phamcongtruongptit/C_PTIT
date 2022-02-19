#include<stdio.h>
#include<string.h>
#include<math.h>
int A[105] , B[105] , n ; 
main(){
	int t , test = 1 , i, j ; scanf("%d" , &t ); 
	while(test<=t){
        scanf("%d" , &n) ; 
        for(i=1 ; i<=n ; i++) scanf("%d" , &A[i]) ; 
        for(i=1 ; i<=n ; i++) scanf("%d" , &B[i]) ; 
        for(i=1 ; i<n ; i++){
            for(j=i+1 ; j<=n ; j++){
                if(A[i] > A[j]) {
                    int tmp = A[i] ; A[i] = A[j] ; A[j] = tmp ; 
                } 
                if(B[i] < B[j] ) {
                    int tmp = B[i] ; B[i] = B[j] ;B[j] = tmp ; 
                }
            }
        }
        printf("Test %d:\n" , test) ; 
        int a = 1 , b=1 ; 
        for(i=1 ; i<=n*2 ; i++){
            if(i%2 != 0) {
                printf("%d " , A[a]) ; a++ ; 
            } else {
                 printf("%d " ,B[b]) ; b++ ; 
            }
        }
        printf("\n") ; 
        test ++ ; 
	} 
}