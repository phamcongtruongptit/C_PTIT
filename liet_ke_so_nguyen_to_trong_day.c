#include<stdio.h>
#include<string.h>
#include<math.h>
int checknto(int n){
    if(n<=1 ) return 0 ;
    if(n == 2 ) return 1 ; 
    int i ; 
    for(i=2 ; i<=sqrt(n) ; i++){
        if(n % i ==  0) return 0 ; 
    }
    return 1 ; 
}
main(){
    int n,i,j  ; scanf("%d" , &n) ; 
    int M[n] ; 
    for(i=0 ;i<n ; i++) scanf("%d" , &M[i]) ; 
    int count = 0 ; 
    for(i=0 ; i<n ; i++){
        if(checknto(M[i]) == 1) count ++ ; 
    }
    printf("%d " , count) ; 
    for(i=0 ; i<n ; i++){
        if(checknto(M[i]) == 1) printf("%d ",M[i] ) ; 
    }
}