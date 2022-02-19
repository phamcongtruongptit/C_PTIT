#include<stdio.h>
#include<string.h>
#include<math.h>
int check(int n){
    int cuoi = n%10 ; 
    while(n>10){
        n/=10 ; 
    }
    if(n==cuoi) return 1 ;
    else return 0 ; 
}
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        int n ; scanf("%d" , &n) ; 
        printf((check(n))?"YES\n":"NO\n") ; 
	} 
}