#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n ; scanf("%d" , &n) ; 
    int i , j ,k ; 
    for(i=n-1 ;i>=0 ; i--){
        for(j=1 ; j<=i ; j++ ) printf("~") ; 
        if(i==n-1 ||i==0){
            for(k=1 ; k<=n ; k++) printf("*") ; 
        } else {
            for(k=1 ; k<=n ; k++){
                if(k==1 || k==n) printf("*") ;
                else printf(".") ;
            }
        }
        printf("\n") ; 
    }
} 