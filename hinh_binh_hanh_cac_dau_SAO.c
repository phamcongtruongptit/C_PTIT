#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n ; scanf("%d" , &n) ; 
    int i , j ,k ; 
    for(i=n-1 ;i>=0 ; i--){
        for(j=1 ; j<=i ; j++ ) printf("~") ; 
        for(k=1 ; k<=n ; k++) printf("*") ; 
        printf("\n") ; 
    }
}

// ~~~~***** 9

// ~~~***** 8
 
// ~~***** 7

// ~***** 6

// ***** 5