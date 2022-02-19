#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105] ; int  n, k ; 
main(){
    scanf("%d" , &n) ; 
    int  i ; 
    for(i=1 ; i<=n ; i++) scanf("%d",&M[i]) ;
    int max = M[1]  , max2  ; 
    for(i=1 ; i<=n ; i++){
        if(max < M[i]) max = M[i] ; 
    }
    max2 = M[1] ; if(max == M[1]) max2 = M[2] ; 
    for(i=1 ; i<=n ; i++){
         if(max2 < M[i] && M[i] != max ) max2 = M[i] ;
    }
             printf("%d %d" , max , max2) ;     
}