#include<stdio.h>
#include<string.h>
#include<math.h>
int M[100][1005] , C[100][100] ; 
main(){
    int  h , c ; 
    scanf("%d%d" , &h , &c) ; 
    int i ,  j ; 
    for(i=1 ; i<=h  ; i ++)
        for(j=1 ; j<=c ; j++){
            scanf("%d" , &M[i][j]) ; 
            C[j][i] = M[i][j] ; 
        }
    for(i =1 ; i<=c ; i++){
        for(j=1 ; j<=h ; j++) {
            printf("%d ",C[i][j]) ; 
        }
        printf("\n") ; 
    }
}