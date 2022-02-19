#include<stdio.h>
#include<string.h>
#include<math.h>
long long n ; 
long long tn(long long n){
    long long t = 0 ; 
    while(n>0){
        t  = t*10 + n%10 ; 
        n/=10 ; 
    }
    return t ; 
}
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        scanf("%lld" , &n) ; 
        printf((tn(n) == n )?"YES\n":"NO\n") ; 
	} 
}