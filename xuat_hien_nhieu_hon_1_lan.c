#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105] ; 
int check[105] ; 
main(){
    int n ; scanf("%d" , &n) ; 
    int i , j ,k ; 
    for(i=1 ; i<=n ; i++){
        scanf("%d" , &M[i]) ; 
        check[i] = 1 ; 
    }
    int co =  0 ; 
    for(i=1 ; i<=n; i++){
        check[i] = 0; 
        for(j=i+1 ; j<=n ; j++){
            if(check[j] && M[j] == M[i] ){
                co =  1 ; 
                printf("%d ", M[i]) ; 
                check[j] = 0 ;
                for(k=j+1 ; k<=n ; k++){
                    if(M[k] == M[j] ) check[k] = 0 ; 
                } 
            }
        }
    }
    if(co == 0 ) printf("0") ; 
    
}