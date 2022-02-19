#include<stdio.h>
#include<string.h>
#include<math.h>
main() {
    int n , i , j , k ;
    scanf("%d"  , &n) ; 
    for(i=1 ; i<=n ; i++) {
        printf("%d" , 1 ) ; 
        for(j=2 ; j<=2*i-1 ; j++) printf("%d" , j ) ; 
        printf("\n");
    }
}