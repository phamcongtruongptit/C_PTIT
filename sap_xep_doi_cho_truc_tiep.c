#include<stdio.h>
#include<string.h>
#include<math.h>
main() {
    int n ; scanf("%d" , &n) ; 
    int i , j ,k; 
    int M[n] ; 
    for ( i=0 ; i<n ; i++) scanf("%d" , &M[i]);  

    for( i=0 ; i<n-1; i++) {
        for (j=i+1 ; j<n ; j++) {
            if (M[i] > M[j]) {
                int tmp = M[i]  ; M[i] = M[j] ; M[j] = tmp  ; 
                }
        }
        printf("Buoc %d: " ,i+1 )  ; 
         for( k=0 ; k<n   ; k++ )printf("%d " , M[k]) ; 
         printf("\n") ; 
    }
}