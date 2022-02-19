#include<stdio.h>
int main(){
    long long a  ; 
    int cuoi ; 
    scanf("%lld" , &a) ; 
    cuoi = a%10 ;
    while(a>1){
        a/=10 ; 
    } 
    printf("%lld %d" , a , cuoi) ; 
    return 0 ; 
}