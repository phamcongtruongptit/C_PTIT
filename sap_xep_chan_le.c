#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105] ; 
main(){
    int n, i , j ; 
    scanf("%d" , &n) ; 
    for(i=1 ; i<=n ; i++) scanf("%d" , &M[i]) ; 
    for(i=1 ; i<n ; i++){
        for(j=i+1 ; j<=n ; j++){
            if(M[i]>M[j]){
                int tmp = M[i]  ; M[i] =M[j] ; M[j]  = tmp ; 
            }
        }
    }
    for(i =1 ; i<=n ; i++){
        if(M[i]%2 == 0) printf("%d " , M[i]) ; 
    }
    for(i =1 ; i<=n ; i++){
        if(M[i]%2 != 0) printf("%d " , M[i]) ; 
    }
}