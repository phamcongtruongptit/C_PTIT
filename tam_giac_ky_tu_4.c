#include<stdio.h>
#include<string.h>
#include<math.h>

main(){
    int i ,  j , k  ,n; 
    int M[50] ; 
    int check = 64  ;
    i=1 ;  
    memset(M , 0 , sizeof(M)) ; 
    while(check<=90){
        M[i] = check ; 
        i++ ; 
        check+=2 ; 
    }

    scanf("%d" , &n) ; 
    int A[100][100] ; 
     memset(A , 0 , sizeof(A)) ; 
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=i ; j++){
            A[i][j] = M[j] ; 
            A[i][2*i - j] = M[j] ; 
        }
    }

    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<2*i ; j++) printf("%c" , (char)A[i][j]) ;
        printf("\n") ;  
    }


}