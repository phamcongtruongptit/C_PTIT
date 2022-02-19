#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int a,b,j,i,k ; 
    scanf("%d%d" , &a,&b) ; 
    for( i = 0 ; i<=a-1 ; i++){
        for(j=1 ; j<=i; j++) printf("~") ; 
        for(k=1 ; k<=b ; k++) printf("*") ; 
        printf("\n") ; 
    }
}