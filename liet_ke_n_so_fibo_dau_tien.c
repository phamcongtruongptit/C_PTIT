#include<stdio.h>
#include<string.h>
#include<math.h>
int F[30] ; 
void fibo(){
    int i ; 
    F[0] = 0 ; F[1] = 1 ;
    for( i=2; i<30 ; i++){
        F[i] = F[i-1] + F[i-2] ; 
    }
}
main(){
    int n ,i; scanf("%d", &n) ; 
    fibo() ; 
    for( i=0 ; i<n ; i++){
        printf("%d " , F[i]) ; 
    }
}