#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        long long n ; scanf("%lld" , &n) ; 
        long long k = sqrt(n) ; 
        printf((k*k==n?"YES\n":"NO\n")) ; 
	} 
}