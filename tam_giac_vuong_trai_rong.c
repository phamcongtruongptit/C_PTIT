#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n , i , j , k ; 
    scanf("%d" , &n) ; 
    for( i=1   ; i<=n ; i++){
        if(i==1 || i== n){
            for(j=1 ; j<=i; j++) printf("*") ; 
         } else {
             for(j=1 ; j<=i ; j++){
                 if(j==1 ||j==i) printf("*") ; 
                 else 
                printf(".") ; 
             }
         }
         printf("\n") ; 
    }
}