#include<stdio.h>
#include<string.h>
#include<math.h>
int n  , M[105][105] ; 
main(){
    memset(M ,  0 , sizeof(M)) ; 
    scanf("%d" , &n) ; 
    int trai =1  , phai = n ; 
    int tren = 1 , duoi = n ; 
    int i , j , k ; 
    i=1 ; 
    while( i<= n*n){
        if(trai <= phai){
            for(j = trai   ; j<= phai ; j++ ) {
                M[tren][j] = i ; 
                i++ ; 
            }
        }
        tren++ ;  
        if(tren <= duoi) {
            for(j=tren  ; j<=duoi ; j++){
                M[j][phai] = i  ; i++ ; 
            }
        }
        phai-- ; 
        if(trai <= phai){
            for(j =phai   ; j >= trai ; j-- ) {
                M[duoi][j] = i ; 
                i++ ; 
            }
        }
        duoi-- ; 
        if(tren <= duoi){
            for(j = duoi ; j>=tren ; j--){
                M[j][trai] = i ; i++ ; 
             }
        }
        trai ++ ; 
    }

    for( i = 1; i <=n ; i++){
        for(j=1  ; j<=n ; j++) printf("%d " , M[i][j]) ; 
        printf("\n") ; 
    }

}   