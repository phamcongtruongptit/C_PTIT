#include<stdio.h>
#include<string.h>
#include<math.h>
int M[1005] ; 
int n ; 
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        scanf("%d" , &n) ; 
        int i ; 
        for(i=1 ; i<=n ; i++) {scanf("%d" , &M[i]) ; 
	} 
    for(i=1 ; i<=n ; i++){
        if(M[i]%2 == 0 ) printf("%d " , M[i]) ; 
    }
    printf("\n") ; 
    }
}