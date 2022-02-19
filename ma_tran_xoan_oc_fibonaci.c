#include<stdio.h>
#include<string.h>
#include<math.h>
long long n  , M[105][105] ; 
long long F[93] ; 
void fibo(){
    F[0]  =0 ; F[1] =1 ; 
    long long i ; 
    for(i=2 ; i<93 ; i++) F[i] = F[i-1] + F[i-2] ; 
}
main(){
    fibo() ; 
    memset(M ,  0 , sizeof(M)) ; 
    scanf("%lld" , &n) ; 
    long long trai =1  , phai = n ; 
    long long tren = 1 , duoi = n ; 
    long long i , j , k ; 
    i=0 ; 
    while( i< n*n){
        if(trai <= phai){
            for(j = trai   ; j<= phai ; j++ ) {
                M[tren][j] = F[i] ; 
                i++ ; 
            }
      }
        tren++ ;  
        if(tren <= duoi) {
            for(j=tren  ; j<=duoi ; j++){
                M[j][phai] = F[i]  ; i++ ; 
            }
        }
        phai-- ; 
        if(trai <= phai){
            for(j =phai   ; j >= trai ; j-- ) {
                M[duoi][j] = F[i] ; 
                i++ ; 
            }
        }
        duoi-- ; 
        if(tren <= duoi){
            for(j = duoi ; j>=tren ; j--){
                M[j][trai] = F[i] ; i++ ; 
             }
        }
        trai ++ ; 
    }

    for( i = 1; i <=n ; i++){
        for(j=1  ; j<=n ; j++) printf("%lld " , M[i][j]) ; 
        printf("\n") ; 
    }

}   