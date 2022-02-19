#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105] , n ; 
int check(){
    int i ; 
    for(i=1 ; i<n/2 ; i++){
        if(M[i] != M[n-i+1]) return 0 ; 
    }
    return 1 ;
}
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        memset(M , 0 , sizeof(M)) ; 
        scanf("%d" , &n) ; 
        int i ; 
        for(i=1 ; i<=n; i++){
            scanf("%d" , &M[i]) ; 
        }
        printf((check())?"YES\n":"NO\n") ; 
	} 
}