#include<stdio.h>
main(){
    long long a ;  
    scanf("%lld" , &a) ; 
     int count = 0 ;  
     while(a > 0){
         count++ ; 
         a/=10 ; 
     }
     printf("%d" , count) ;  
}