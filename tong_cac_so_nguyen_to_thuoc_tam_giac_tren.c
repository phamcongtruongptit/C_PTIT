#include<stdio.h>
#include<string.h>
#include<math.h>
int n ; int M[100][100] ; 
int check(int n){
    if(n==1 ) return 0 ; 
    if(n==2) return 1  ; 
    int i  ; 
    for(i =2 ; i<=sqrt(n) ; i++){
        if(n%i == 0) return 0  ; 
    }
    return 1 ; 
}
main(){
    scanf("%d" , &n) ; 
    int i , j,tong = 0  ; 
    for(i=1 ; i <=n ; i++)
        for(j=1 ; j<=n ; j++) {
            scanf("%d" , &M[i][j]) ; 
            if(i<=j  && check(M[i][j])) tong += M[i][j] ; 
        }
    printf("%d" , tong) ; 

    
}