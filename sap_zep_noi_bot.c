#include<stdio.h>
#include<string.h>
#include<math.h>
int i , j , k  ;  
main() {
    int n ;  scanf("%d" , &n) ; 
    int M[n]  ; 

    for(i=0 ; i<n ; i++) scanf("%d" , &M[i]);  
    
    for ( i = n-1 ; i>=0 ; i--) {
        int ok = 0;
        for( j=0 ; j<i ; j++) {
            if (M[j] > M[j+1]) {
                ok = 1;  
             int tmp = M[j]  ; M[j] = M[j+1] ; M[j+1] = tmp  ; 
            }
        }
        if (ok == 0) break ; 
         printf("Buoc %d: " ,n-i )  ; 
        for( k=0 ; k<n   ; k++ ) printf("%d " , M[k]) ; 
        printf("\n") ; 
    }
}