#include<stdio.h>
#include<string.h>
#include<math.h>
int chuso(long long n){
    while(n>0){
        int k = n%10 ; 
        if(k%2 == 0){
            return 0 ; 
        }
        n/=10 ; 
    }
    return 1  ; 
}
int thuannghich(long long n){
    int m = 0 ; 
    int a = n ; 
    while(n>0){
        m = m*10 + (n%10) ; 
        n/=10 ; 
    }
    if(m == a) return 1; 
    else return 0 ; 
}
int tong(long long n){
    int tong  = 0 ; 
    while(n>0){
        tong+=n%10 ; 
        n/=10 ; 
    }
    if(tong % 2 == 0) return 0 ; 
    else return 1 ; 
}
main(){
    int t ; scanf("%d", &t) ; 
    while(t--){
        long long n; scanf("%lld" , &n) ; 
        if(thuannghich(n) ==1 && tong(n) == 1 && chuso(n) == 1 ) printf("YES\n") ; 
        else printf("NO\n") ; 
    }
}