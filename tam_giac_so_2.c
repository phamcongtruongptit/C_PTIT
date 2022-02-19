#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n , i , j , k ; 
    scanf("%d" , &n) ; 
    for(i=1 ; i<=n ; i++){
        if(i%2 == 1){ // th i le
            k=1 ; 
            for(j=1 ; j<=i ; j++) {
                printf("%d",k) ; 
                k+=2 ; 
            }
            printf("\n") ; 
        }
        else {
            k=2 ; 
            for(j=1 ; j<=i ; j++) {
                printf("%d",k) ; 
                k+=2 ; 
            }
            printf("\n") ; 
        }
    }
}
/*
1
24
135
2468
13579
*/