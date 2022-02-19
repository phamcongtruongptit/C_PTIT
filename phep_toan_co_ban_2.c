#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int a , b ; 
    scanf("%d%d" , &a , &b) ; 
    printf("%d\n%d\n%lld\n%d\n%d\n%.2f" , a+b , a-b ,(long long)a*b ,a/b , a%b, a/(float)b) ; 
}