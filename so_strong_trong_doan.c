#include<stdio.h>
#include<string.h>
#include<math.h>
int check(int n){
    int tong = 0 ; 
    int m = n ; 
    while(m>0){
        int k =  m%10 ; 
        int tich = 1 ; 
        while(k>=1 ){
            tich*=k;
            k--; 
        }
        tong+=tich; 
        m/=10; 
    }
    if(n==tong) return 1 ; 
    else return 0 ;
}
main(){
    int n,m ; scanf("%d%d", &n,&m) ; 
    int min = (n<m)?n:m ; 
    int max = (n<m)?m:n ; 
    int i = min ;

    while(i<=max){
        if(check(i)) printf("%d " , i) ; 
        i++ ; 
    }
}