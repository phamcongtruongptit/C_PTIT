#include<stdio.h>
#include<string.h>
#include<math.h>
int A[1005] ,n ; 
main(){
    scanf("%d" , &n) ; 
    int i ; 
    for(i=1 ; i<=n ; i++){
        scanf("%d" , &A[i]) ; 
    }
    for(i= n ; i>=1 ; i--){
        printf("%d " ,A[i] ) ; 
    }
}