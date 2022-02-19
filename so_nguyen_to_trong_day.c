#include<stdio.h>
#include<string.h>
#include<math.h>
int M[1005] ; 
int n ; 
int checknto(int n){
    if(n<=1) return 0 ; 
    if(n==2) return 1; 
    int i ; 
    for(i=2 ; i<=sqrt(n) ; i++) {
        if(n%i == 0) return 0 ; 
    }
    return  1 ;
}
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        scanf("%d" , &n) ; 
        int i ; 
        for(i=1 ; i<=n ; i++) scanf("%d" , &M[i]) ; 
        for(i=1 ; i<=n ; i++)
            if(checknto(M[i])) printf("%d " , M[i]) ; 
        printf("\n") ; 
	} 
}