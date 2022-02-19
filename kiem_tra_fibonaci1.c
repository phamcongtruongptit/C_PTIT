#include<stdio.h>
#include<string.h>
#include<math.h>
long long F[100] ; 
void fibo(){
    F[0]= 0 ; F[1] = 1   ; 
    int i ; 
    for(i=2 ; i<100 ; i++) {
        F[i] = F[i-1] + F[i-2] ; 
    }
}
int check(int n){
    int i; 
    for(i=0 ; i<100 ; i++){
        if(n== F[i] ) return 1 ; 
    }
    return 0 ; 
}
main(){
    fibo() ; 
    int n ; scanf("%d" , &n) ; 
    printf((check(n))?"1":"0") ; 
}