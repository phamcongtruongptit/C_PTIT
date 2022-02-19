#include<stdio.h>
#include<string.h>
#include<math.h>
int M[1000] , n ; 
main(){
    scanf("%d" , &n) ; 
    int check[n+2] ; memset(check , 1 , sizeof(check)) ; 
    int i  , j ; 
    for(i=1 ; i<=n ; i++){
        scanf("%d" , &M[i]) ; 
        if(M[i] % 2 == 0) {
            check[i]  =   0 ; 
            printf("%d " , M[i])  ; 
        }
    }
    printf("\n") ; 
    for(i=1 ; i<=n ; i++){
        if(check[i]) printf("%d " , M[i]) ; 
    }
    
}