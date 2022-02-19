#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n, i,j,k ; 
    scanf("%d" , &n) ;
    int M[n+1][n+1] ; 
    k=65; 
    memset(M , 0 , sizeof(M)) ; 
    for( j =1 ; j<=n ; j++){
        for(i=j ; i<=n ; i++){
            M[i][j] = k ; k++ ; 
        }
    }
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=i ; j++) printf("%c " , (char)M[i][j] ) ; 
        printf("\n") ; 
    }
}