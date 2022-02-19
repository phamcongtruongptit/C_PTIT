
#include<stdio.h>
#include<string.h>
#include<math.h>
int tongcs(long long n){
    int tong  = 0 ; 
    while(n>0){
        tong+=n%10 ; 
        n/=10 ; 
    }
    return tong ; 
}
main(){
    long long n ; scanf("%lld" , &n) ; 
    long long m = n ; 
    int tong = 0 ; 
    int i=2 ; 
    while(i<=n){
        while(n%i == 0) {
            tong+=tongcs(i) ; 
            n/=i; 
        }
        i++ ; 
    }
    if(tongcs(m) == tong) printf("YES\n") ; 
    else printf("NO\n" );
}