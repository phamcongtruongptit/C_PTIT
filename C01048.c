#include<stdio.h>

int main(){
    long long k ; 
    scanf("%lld" , &k) ; 
    int c = 0 , l = 0 ; 
    while(k>0){
        int check = k%10 ; 
        if(check % 2 == 0 ) c++ ; 
        else l++ ; 
        k/=10 ; 
    }
    printf("%d %d ", l, c ) ; 
    return 0; 
}