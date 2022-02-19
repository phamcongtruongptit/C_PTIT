#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105] ; int  n, k ; 
main(){
    scanf("%d" , &n) ; 
    int  i ; 
    for(i=1 ; i<=n ; i++) scanf("%d",&M[i]) ;
    scanf("%d",&k) ; 
    for(i=k+1 ; i<=n ; i++) printf("%d " , M[i]) ; 
    for(i=1 ; i<=k ; i++)  printf("%d " , M[i]) ; 
}