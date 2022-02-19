#include<stdio.h>
#include<string.h>
#include<math.h>
int a , b , i , j, n , A[105] , B[105] ; 
main(){
    scanf("%d%d" , &a , &b) ; 
    for(i=0 ; i<a ; i++) scanf("%d"  , &A[i]) ; 
    for(j=0 ; j<b ; j++) scanf("%d" , &B[j]) ; 
    scanf("%d" , &n) ; 
    for(i=0 ; i<a ;  i++){
 
        if(i==n){
            for(j=0 ; j<b ;  j++){
        printf("%d " , B[j]) ; }
        }
                printf("%d " , A[i]) ;
    }
    if(n>=a) for(j=0 ; j<b ;  j++){
        printf("%d " , B[j]) ; }
}