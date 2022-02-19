#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int n ; scanf("%d", &n) ; 
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
    if(n==tong) printf("1") ; 
    else printf("0") ;
}