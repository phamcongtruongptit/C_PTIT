#include<stdio.h>
#include<string.h>
#include<math.h>
main() {
    int M[27] ; M[0] = 0 ; 
    int a,b,i,j,k ; 
    k=65 ;
    for( i=1 ; i<27 ; i++){
        M[i] = k ; k++; 
    } 
    
    scanf("%d%d" , &a, &b) ; 
    int max = (a>b)?a:b ; 

    int K[a+1][b+1] ; 
    memset(K , 0 , sizeof(K)) ; 
    for(j=1 ; j<=b ; j++) K[1][j] = M[max+1-1] ; 
    for(i=2 ; i<=a ; i++){
        for(j=1; j<=i ; j++){
           // if(j>b) break ; 
            K[i][j] = M[max+1-j] ; 
        }
        for(j=i+1 ; j<=b ; j++) K[i][j] = K[i][j-1] ; 
    }

    for(i = 1 ; i<=a ; i++){
                for(j=1 ; j<=b ; j++) printf("%c" , (char)(K[i][j] + 32)) ; 
        printf("\n") ;
    }
  

}