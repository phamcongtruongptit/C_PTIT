#include<stdio.h>
#include<string.h>
#include<math.h>
int checksohoanhao(int n){
    if(n==1) return 0 ; 
    int tong = 1 ; 
    int i ; 
    for(i=2 ; i<=sqrt(n) ;  i++){
        if(n%i == 0){
            if(i == (n/i) ) tong+=i ; 
            else {
                tong += i ; 
                tong+= n/i ; 
            }
        }
    }
    if(tong == n) return 1 ; 
    else return 0 ; 
}
main(){
    int n , m , max , min ; 
    scanf("%d%d" , &m,&n ) ; 
    max = (n>m)?n:m ; 
    min = (n>m)?m:n ; 
    int i ;
    for(i = min ; i<=max ; i++){
        if(checksohoanhao(i)) printf("%d " , i) ; 
    }
 }