#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int h , c ; 
    scanf("%d%d" , &c , &h) ; 
    int i , j ; 
    for(i=1 ; i<=h ; i++){

    
        for(j=1 ; j<=c ; j++){
            if(i==1 || i== h || j==1 || j==c) printf("*") ; 
            else printf(" ") ; 
        }
        printf("\n") ; 
}
}