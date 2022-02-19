#include<stdio.h>
#include<string.h>
#include<math.h>
int a , b ; 
int checkgiam(int n){
    while(n>10){
        int sau = n%10 ; 
        n/=10 ; 
        if(sau >= (n%10)) return 0 ; 
    }
    return 1 ; 
}
int tinh(){
    int count = 0 ; //
    int i =a ; 
    while(i<=b){
        if(checkgiam(i)) count++;
        i++; 
    }
    return count ; 
}
main(){
    int  t ; scanf("%d",&t) ; 
    while(t--){
        scanf("%d%d",&a , &b) ; 
        printf("%d\n" , tinh());
    }
}