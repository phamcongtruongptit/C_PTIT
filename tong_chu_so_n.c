#include<stdio.h>
int main(){

    long long a ; 
    int sum=0; 
    scanf("%lld" , &a) ; 
    while(a>0){
        sum += (a%10) ; 
        a/=10 ; 
    }
    printf("%d" , sum ) ; 

    return 0 ; 
}