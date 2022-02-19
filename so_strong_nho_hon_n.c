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
    int n ; scanf("%d", &n) ; 
    int i = 1 ;
    while(i<n){
        if(check(i)) printf("%d " , i) ; 
        i++ ; 
    }
}