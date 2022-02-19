#include<stdio.h>
#include<string.h>
#include<math.h>
int n; 
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
    scanf("%d" , &n) ; 
    int i=2 ,count = 0  ; 
    while(1 ){
        if(checknto(i)) {printf("%d\n" , i)  ; count ++  ;

    }
    if(count == n) break ; 
    i++ ; 
    }
}