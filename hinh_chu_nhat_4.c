#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int a , b ,i,j,k ,l; 
    scanf("%d %d" , &a  , &b) ; 
    int M[a+1][b+1] ; 
	int max = (a>b)?a:b ; 
    memset(M , 0 , sizeof(M)) ; 
    for( i=1 ; i<=a ; i++){
        for(j = 1 ; j<=b ; j++){
            if(j==1) M[i][j] = max+1-i ; 
            if(j>1){
                k = M[i][j-1] ; 
                if(k>1){
                    k-- ; 
                    M[i][j] = k ; 
                } else if(k==1){
                    k++ ; 
                    for(l=j ; l<=b ; l++){
                        M[i][l] = k ; 
                        k++ ; 
                    }
                    break ; 
                }
                
            }
        }
    }

    for(i=1 ; i<=a ; i++){
            for(j=1 ; j<=b ; j++) printf("%d" , M[i][j] ) ; 
            printf("\n") ; 
    }
}