#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n , i , j , k , l , K[50] , M[50][50] ; 
    memset(M,0,sizeof(M));
    scanf("%d" , &n ) ; 
    k = 64  ; 
    K[1] = 64 ; k++ ; 
    for(i =2 ; i<27 ; i++){
        K[i] = k ; k++ ; 
    }

    for(i  = 1 ; i<=n ; i++){ 
        M[i][1] = n-i+1 ; 
        for(j=2 ; j<= n-i+1 ; j++){
            M[i][j] = M[i][j-1] + 1 ; 
        }
    }

    for(i = 1 ; i<= n ; i++){
        for(j=1 ; j<=n-i+1 ; j++){
            printf("%c" , (char)(K[M[i][j]])) ; 
        }
        printf("\n") ; 
    }

}