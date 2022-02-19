#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int i , j , n , k , M[100][100] ; 
    memset(M , 0, sizeof(M)) ; 
    scanf("%d" , &n) ; 
    M[1][1] =1  ; 
    for(i = 2 ; i<=n ; i++) {
        if(i%2 == 0){
            k = M[i-1][i-1] ; k++ ; 
            for(j=i ; j>=1 ; j--){
                M[i][j] = k ; k++ ; 
            }
        } else {
            k = M[i-1][1] ; k++ ;
            for(j =1 ; j<=i ; j++) {
                M[i][j] = k ; k++ ; 
            }
        }
    }

    for(i =1 ; i<=n ; i++){
        for(j =1 ; j<= i ; j++){
            printf("%d " , M[i][j]) ; 
        }
        printf("\n")  ; 
    }
}