#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int a , b , c ; 
    scanf("%d %d %d" , &a , &b , &c) ;
   // if(a == b && b== c) printf("%d" , a) ; 
   // else {
        int  min = (a<b) ? a : b ; 
        min = (min < c) ? min : c ; 
        printf("%d" , min) ; 
   // } 
}