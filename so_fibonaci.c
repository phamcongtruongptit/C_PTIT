#include<stdio.h>
#include<string.h>
#include<math.h>
long long F[93] ; 
void fibo(){
    F[1] =1 ; F[2] =2  ; 
    int i ; 
    for(i=3 ; i<=93 ; i++) {
        F[i] = F[i-1] + F[i-2] ; 
    }
}
main(){
	int t ; scanf("%d" , &t ); 
    fibo() ; 
	while(t--){
        int n ; scanf("%d" , &n) ; 
        printf("%lld\n" , F[n-1]) ; 
	} 
}