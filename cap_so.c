#include<stdio.h>
#include<string.h>
#include<math.h>
long UCLN(long a , long b){
    if(a==0 || b==0){ return a+b;}
    while(a!=b){
        if(a>b) a-=b ; 
        else b-=a  ; 
    }
    return a  ; 
}
main(){
    int t ;  scanf("%d", &t);
    while(t--){
        long a , b , c ,d ; 
        scanf("%ld%ld%ld%ld", &a , &b , &c , &d) ; 
        if(UCLN(a , b) == UCLN(c , d)) printf("YES\n") ; 
        else printf("NO\n") ; 
    }
}