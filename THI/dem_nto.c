#include<stdio.h>
#include<string.h>
#include<math.h>
int checknto(int n) {
    if(n<2) return 0;
    int i =2 ; 
    for(i=2 ; i<=sqrt(n); i++) {
        if(n%i == 0 ) return 0;
    }
    return 1 ; 
}
main(){
    int M[100][100] ;
    int check[10000] ; //
    memset(check,0,sizeof(check)) ; 
    int n  ; 
    scanf("%d" , &n) ; 
    int  i , j  , count = 0 ; 
    for(i =1 ; i<=n ; i++) {
        for(j=1 ; j<=n ; j++){
            scanf("%d" , &M[i][j]) ; 
        }
    }
    for(i =1 ; i<=n ; i++) {
        for(j=1 ; j<=n ; j++){
            if(i==j){
                if(checknto(M[i][j]) && check[M[i][j]]==0 ) {
                    count++  ; 
                    check[M[i][j]]=1 ; 
                }
            }
            if((i+j) == (n+1) ){
                   if(checknto(M[i][j]) && check[M[i][j]]==0 ) {
                    count++  ; 
                    check[M[i][j]]=1 ; 
                }
            }
        }
    }

    printf("%d" , count ) ; 
}