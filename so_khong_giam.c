#include<stdio.h>
#include<string.h>
#include<math.h>
int check(long long n){
    int i , j ; 
    while(n>10){
        i = n%10 ; 
        n/=10 ; 
        j = n%10 ; 
        if(j>i) return 0 ; 
    }
    return 1 ; 
}
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        long long n  ; scanf("%lld" , &n) ; 
        printf(check(n)?"YES\n":"NO\n") ; 
	} 
}