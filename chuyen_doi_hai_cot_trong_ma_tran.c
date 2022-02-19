#include<stdio.h>
#include<string.h>
#include<math.h>
int M[100][100] , C[100][100] ; 
main(){
    int  h , c ; 
    scanf("%d%d" , &h , &c) ; 
    int i ,  j ; 
    for(i=1 ; i<=h  ; i ++)
        for(j=1 ; j<=c ; j++){
            scanf("%d" , &M[i][j]) ; 
            C[j][i] = M[i][j] ; 
        }
        int a , b ; scanf("%d%d" , &a , &b) ; 
    for(i = 1 ; i<=h ; i++){
        for(j=1 ; j<=c ; j++){
            if(j==a){
                printf("%d ", M[i][b]) ; 
            } else if(j==b){
                printf("%d ", M[i][a]) ; 
            } else {
                printf("%d " , M[i][j]) ; 
            }
        }
        printf("\n") ; 
    }
}