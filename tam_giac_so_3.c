#include<stdio.h>
#include<string.h>
#include<math.h>
main() {
    int n , i , j , k , M[100][100] ;
    scanf("%d" , &n) ;  
    memset(M, 0, sizeof(M)) ; 
    for(i =1 ; i<=n ; i++){
        M[i][1] = 1 ;
        for(j =2 ; j<=i*2 -1  ; j++){
            if(j<=i){
                M[i][j] = M[i][j-1] + 2 ; 
            }
            else {
                M[i][j] = M[i][j-1] - 2 ; 
            }

        }
    }

    for(i =1 ; i<=n ; i++){
        for(j=1 ; j<i*2 ; j++){
            printf("%d" , M[i][j]) ; 
        }
        printf("\n") ; 
    }
	
}