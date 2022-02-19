#include<stdio.h>
#include<string.h>
#include<math.h>
long long gt(int n){
    int i ; 
    long long tich =1 ; 
    i = 1; 
    while(i<=n ){
        tich*=i  ; i++ ; 
    }
    return tich ; 
}
main(){
    int n ; scanf("%d" , &n) ; 
    long long tong  = 0 ; 
    int i =1 ; 
    while(i<=n ){
        tong+=gt(i) ; i++ ; 
    }
    printf("%lld" , tong) ; 
}