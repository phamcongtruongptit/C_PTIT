#include<stdio.h>
#include<string.h>
int B[105] , C[105] ; 
void doclap(int A[] , int n , int *b){
    memset(B , 0 ,sizeof(B)) ; 
      
    B[*b] = A[1] ; *b+=1; 
    int i , j  ; 
    int check ; 
    for(i=2 ; i<=n ; i++){
        check = 1 ; 
        for(j=1 ; j<i ; j++){
            if(A[i] == A[j] ) {
                check = 0 ; break ; 
            }
        }
        if(check == 1 ) {
            B[*b] = A[i] ; *b+=1 ; 
        }
    }
}
main(){
    int t  ; scanf("%d" ,&t) ; 
    while(t--){
    int A[105] ;  
    memset(A , 0 ,sizeof(A)) ; 
    memset(C , 0 ,sizeof(C)) ; 
    int b =  1; 
    int n ; scanf("%d" , &n) ; 
    int i, j ; 
    for(i=1  ; i<=n  ; i++){
        scanf("%d", &A[i]) ; 
    }
    int max = 0 ; 
    doclap(A , n , &b ) ; 
    int check = 0 ; 
    for( i =1 ; i<b ; i++){
        int count = 0 ;
        for(j=1 ; j<=n ; j++){
            if(A[j] == B[i]) count ++ ; 
        }
        C[i] = count ; 
        if(max < count) max = count ; 
    }
    for(i=1 ; i<b ; i++) {
        if(max == C[i]) {
            printf("%d " ,B[i]) ;
        } 
    }
    printf("\n") ; 
}
}