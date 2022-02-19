#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int  n ; 
    scanf("%d",&n) ; 
    int K[30] ; 
    int i , j , k , l ; 
    k  = 65 ; 
    for(i= 1 ; i<27 ; i++){
        K[i] = k ; k+=2 ; 
    }
    int M[50][50] ; 
    memset(M,0,sizeof(M)) ; 
    for(i=1 ; i<=n ; i++){ 
        M[i][1] = i ;
        for(j=2 ; j<=n+1-i ; j++){ 
            M[i][j] = M[i][j-1] + 1 ; 
        }
    }
    
    for(i =1 ; i<=n ; i++){ 
        for(j=1 ; j<=n-i+1 ; j++){
            printf("%c" , (char)(K[M[i][j]] )) ; 
        }
        printf("\n") ; 
    }
    

}