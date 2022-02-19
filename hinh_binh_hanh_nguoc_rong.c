#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n,m ; scanf("%d%d" , &n,&m) ; 
    int i , j ,k ; 
    for(i=0 ;i<=n-1 ; i++){
        for(j=1 ; j<=i ; j++ ) printf("~") ; 
        if(i==n-1 ||i==0){
            for(k=1 ; k<=m ; k++) printf("*") ; 
        } else {
            for(k=1 ; k<=m ; k++){
                if(k==1 || k==m) printf("*") ;
                else printf(".") ;
            }
        }
        printf("\n") ; 
    }
} 