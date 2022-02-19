#include<stdio.h>
#include<string.h>
#include<math.h>
int checknto(int n){
    if(n<=1) return 0 ; 
    if(n==2) return 1; 
    int i ; 
    for(i=2 ; i<=sqrt(n) ; i++) {
        if(n%i == 0) return 0 ; 
    }
    return  1 ;
}
main(){
    int n ; scanf("%d" , &n) ; 
    int i =2 ; 
    for(i=2 ; i<n; i++)
        if(checknto(i)) printf("%d\n", i) ; 
}