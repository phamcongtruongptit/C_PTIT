#include<stdio.h>

main(){
    int  a ; int b ; 
    scanf("%d %d" , &a ,&b) ; 
    if(a<=0 || b<=0) {
        printf("0") ; 
    }
    else {
        printf("%d %d" , 2*(a+b) , a*b) ; 
    }
}