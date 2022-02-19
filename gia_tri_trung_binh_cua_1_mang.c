#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105] ; int  n , i ,j ; 
main(){
    scanf("%d" , &n) ; int tong = 0 ; 
    for(i=1 ; i<=n ; i++) {
        scanf("%d" , &M[i]) ; 
        tong+=M[i] ; 
    }
    printf("%.3f" , (float)tong / n) ; 
    

}