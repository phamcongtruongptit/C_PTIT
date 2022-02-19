#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int t ; scanf("%d" , &t) ; 
    while(t--){
    long long a  , b ; 
    scanf("%lld %lld", &a , &b) ; 
    long long max = (a>b)?a:b ; 
    long long min = (a<b)?a:b  ; 
    long long i, j  ; 

    long long boiso = min*max ; 
    for(i = 1 ; i<=sqrt(min) ; i++){
        if(min%i == 0){
            long long k = max*i;
            long long kk = max*(min/i) ; 
            if(k % min == 0 ){
                 boiso = (k<boiso)?k:boiso ; 
            }
            if(kk % min == 0 ){
                boiso = (kk<boiso)?kk:boiso ; 
            }
        }
    }
    long long uocso = 1; 
    for(i = 1 ; i<=sqrt(min) ; i++){
        if(min % i == 0 ){
            if(max%i == 0 ){
                uocso = (i>uocso)?i:uocso ; 
            }
            if(max%(min/i) == 0){
                uocso = ((min/i)>uocso)?(min/i):uocso ;
            }
            
        }
    }
    printf("%lld %lld", boiso , uocso) ; 
    printf("\n") ; 
    }
    
}