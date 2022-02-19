#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int a  , b ; 
    scanf("%d%d", &a , &b) ; 
    int max = (a>b)?a:b ; 
    int min = (a<b)?a:b  ; 
    int tong = 0 , i=min; 
    while(i<=max){
        tong+=i;
        i++; 
    }
    printf("%d", tong) ; 
}