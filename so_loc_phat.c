#include<stdio.h>
#include<string.h>
#include<math.h>
int check(int n){
    while(n>0){
        int i = n%10 ; 
        if(i!=0 && i!=6 &&i!=8) return 0 ; 
        n/=10 ; 
    }
    return 1; 
}
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        int n ; scanf("%d" , &n) ;
        printf((check(n))?"YES\n":"NO\n") ;  
	} 
}