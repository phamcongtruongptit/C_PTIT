#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n ; double kq = 0  ; 
    scanf("%d" , &n) ;
    int i =1 ; 
    while(i<=n){
        kq+= (double)1  / i ; 
        i++ ; 
    } 
    printf("%.4lf" , kq) ; 
}