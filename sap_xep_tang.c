#include<stdio.h>
#include<string.h>
#include<math.h>
int M[1005] ,n , i , j ; 
main(){
    scanf("%d" , &n) ; 
    for(i=1 ; i<=n ; i++){
        scanf("%d" , &M[i]) ; 
    }
    for(i=1 ; i<n ; i++){
        for(j = i+1 ; j<=n ; j++){
            if(M[i] > M[j]){
                int tmp = M[i] ; M[i] = M[j] , M[j] = tmp ; 
            }
        }
    }
    for(i=1 ; i<=n ; i++) printf("%d " , M[i])  ; 
}
