#include<stdio.h>
int main(){

    long long a ; 
    int tich=1; 
    scanf("%lld" , &a) ; 
    while(a>0){
        tich *= (a%10) ; 
        a/=10 ; 
    }

    printf("%d" , tich ) ; 

    return 0 ; 
}