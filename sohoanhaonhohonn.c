#include<stdio.h>
#include<string.h>
#include<math.h>
int checksohoanhao(int n){
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
    int n ; scanf("%d" , &n) ; 
    int i ; 
    for(i=6 ; i<n; i++){
        if(checksohoanhao(i)) printf("%d " , i) ; 
    }
 }