#include<stdio.h>
#include<string.h>
#include<math.h>
int n  , M[105][105] ; 
int nto[100] ;
int check(int n){
    if(n==1) return 0 ; 
    if(n==2 ) return 1; 
    int i ; 
    for(i=2 ; i<=sqrt(n) ; i++) 
        if(n%i == 0 ) return 0 ; 
    return 1; 
}
void mangnto(){
    int i = 0   , run  = 1 ; 
    for(run = 1 ; run <=1000 ; run++){
        if(check(run)) {
            nto[i] = run ; i++ ; 
        }
        if(i==100) break ;  
    }
}
main(){
    mangnto() ; 
    int t ; scanf("%d" ,&t) ; 
    int test = 1 ;
    while(test <=t) {
    memset(M ,  0 , sizeof(M)) ; 
    scanf("%d" , &n) ; 
    int trai =1  , phai = n ; 
    int tren = 1 , duoi = n ; 
    int i , j , k ; 
    i=0 ; 
    while( i< n*n){
        if(trai <= phai){
            for(j = trai   ; j<= phai ; j++ ) {
                M[tren][j] = nto[i] ; 
                i++ ; 
            }
      }
        tren++ ;  
        if(tren <= duoi) {
            for(j=tren  ; j<=duoi ; j++){
                M[j][phai] = nto[i]  ; i++ ; 
            }
        }
        phai-- ; 
        if(trai <= phai){
            for(j =phai   ; j >= trai ; j-- ) {
                M[duoi][j] = nto[i] ; 
                i++ ; 
            }
        }
        duoi-- ; 
        if(tren <= duoi){
            for(j = duoi ; j>=tren ; j--){
                M[j][trai] = nto[i] ; i++ ; 
             }
        }
        trai ++ ; 
    }

    printf("Test %d:\n" , test) ; 
    for( i = 1; i <=n ; i++){
        for(j=1  ; j<=n ; j++) printf("%d " , M[i][j]) ; 
        printf("\n") ; 
    }
    test ++ ; 
    }
}   