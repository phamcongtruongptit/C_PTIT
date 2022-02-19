#include<stdio.h>
#include<string.h>
#include<math.h>
int tongcs(int n){
    int tong = 0 ; 
    while(n>0){
        tong += (n%10) ; 
        n/=10 ; 
    }
    return tong ; 
}
main(){
    int a , b ; 
    scanf("%d%d" , &a ,&b) ; 
    if(tongcs(a) > tongcs(b)) printf("%d %d",b,a) ; 
    else printf("%d %d",a,b) ; 

}