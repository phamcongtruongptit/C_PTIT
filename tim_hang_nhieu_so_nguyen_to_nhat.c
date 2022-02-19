#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105][105] , n  ,max  , check[50] ; 
int i , j ; 
int checknt(int n){
    int i ; 
    if(n==1) return 0 ; 
    if(n==2 ) return 1 ;
    for(i=2 ; i<=sqrt(n) ; i++) {
        if(n%i == 0) return  0 ; 
    }
    return 1 ; 
}
main(){
    
    max =  0 ; 
    scanf("%d" , &n) ; 
    for(i=1 ; i<=n ; i++){
        int count = 0 ; 
        for(j=1 ; j<=n  ; j++){
            scanf("%d" , &M[i][j])  ;
            if( checknt(M[i][j]) ) count++ ; 
        }
        if(max < count) max = count ; 
        check[i] = count ; 
    }

    for(i=1 ; i<=n ; i++){
        if(check[i] == max ) {
            printf("%d\n" , i) ; 
            for(j=1 ; j<=n ; j++){
                if(checknt(M[i][j])) printf("%d " , M[i][j]) ; 
            }
            break ; 
        }
    }
}