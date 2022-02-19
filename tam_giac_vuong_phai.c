#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n , i , j , k  ; 
    scanf("%d" , &n) ; 
    for(i=1 ; i<=n ; i++){
        k = n-i ; 
        for(j=1 ; j<=n ; j++){
            if(j<=k){
                printf("~") ;
            }
            else printf("*") ; 
        }
        printf("\n") ; 
    }
}