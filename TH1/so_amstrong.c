#include<stdio.h>
#include<string.h>
#include<math.h>
int M[10] ; 
int n ; 
int dem(int n){
    int count = 0 ; 
    while(n>0){
        count++ ; 
        n/=10 ; 
    }
    return count ; 
}
int check(int n){
    int so = dem(n) ; 
    int tong = 0 ; 
    memset(M , 0 , sizeof(M)) ; 
    int i ,  j ; 
    int m = n ; 
    while(n>0){
        i = n%10 ; 
        tong +=pow(i,so) ; 
        n/=10 ; 
    }
 
    if(tong == m) return 1 ; 
    else return 0 ; 
}
main(){
    int n; scanf("%d" , &n) ; 
    int i ; 
    for(i= 1; i<=n ; i++){
        if(check(i)) printf("%d " , i) ; 
    }
}