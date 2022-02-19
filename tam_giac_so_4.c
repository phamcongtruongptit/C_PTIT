#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int  n , i , j , k , M[100][100] ; 
    memset(M,0,sizeof(M));
    scanf("%d" , &n) ; 

    for(i=1; i<=n; i++){
        M[i][n] = i*2 - 1; 
        k = i-1 ; 
        for(j=1 ; j<=(n+i-1); j++){
            if(abs(n-j)<=k) {
                M[i][j]  = M[i][n] - 2*abs(n-j) ; 
            }
        }
    }

    for(i=1; i<=n; i++){
        for(j=1 ; j<=n+i-1; j++){
            if(M[i][j] == 0 )printf("~") ; 
            else printf("%d" , M[i][j]) ; 
        }
        printf("\n")  ; 
    }

}