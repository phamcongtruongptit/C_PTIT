#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105][105] , n ; 
main(){
    int i , j ; 
    scanf("%d" , &n) ; 
    for(i=1 ; i<=n ; i++)
        for(j=1 ; j<=n ; j++) scanf("%d" , &M[i][j]) ; 
    for(i=1  ; i<=n ; i++){
        for(j=1 ; j<=n ; j++){
            if(j == i){
                int tmp = M[i][j] ; M[i][j] = M[i][n+1-i] ; M[i][n+1-j] = tmp ; 
            }
        }
    }

    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=n ;j++) printf("%d ", M[i][j]) ; 
        printf("\n") ; 
    }
}