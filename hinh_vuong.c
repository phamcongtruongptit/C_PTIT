#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        int a , b , c , d ; 
        scanf("%d%d%d%d" , &a,&b,&c,&d) ; 
        printf((c-a) == (d-b) ? "YES\n":"NO\n") ; 
	} 
}