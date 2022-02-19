#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105] ; int  n, k ; 
main(){
    scanf("%d" , &n) ; 
    int  i ; 
    for(i=1 ; i<=n ; i++) scanf("%d",&M[i]) ;
    int min = M[1]  , min2  ; 
    for(i=1 ; i<=n ; i++){
        if(min > M[i]) min = M[i] ; 
    }
    min2 = M[1] ; if(min == M[1]) min2 = M[2] ; 
    for(i=1 ; i<=n ; i++){
         if(min2 > M[i] && M[i] != min ) min2 = M[i] ;
    }
             printf("%d %d" , min , min2) ;     
}