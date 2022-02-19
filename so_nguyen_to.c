#include<stdio.h>
#include<string.h>
#include<math.h>
int checknguyento(int n){
    if(n<=1) return 0 ; 
    if(n==2) return 1  ; 
    int i ;
    for(i=2 ; i<=sqrt(n) ; i++){
        if(n%i == 0) return 0 ; 
    }
    return 1; 
}
main(){
    int t; scanf("%d" , &t);
    while(t--){
        int n ; scanf("%d" , &n) ; 
        if(checknguyento(n) == 1) printf("YES\n") ;
        else printf("NO\n") ;  
    }
}