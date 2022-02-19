#include<stdio.h>
#include<string.h>
#include<math.h>
int B[10005] ; 
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
    int A[10005] ;  memset(A , 0 ,sizeof(A)) ; 
    int b =  1; 
    int n ; scanf("%d" , &n) ; 
    int i, j ; 
    for(i=1  ; i<=n  ; i++){
        scanf("%d", &A[i]) ; 
    }
    doclap(A , n , &b ) ; 
    for( i =1 ; i<b ; i++){
        // int count = 0 ; printf("%d " , B[i])  ; 
        // for(j=1 ; j<=n ; j++){
        //     if(A[j] == B[i]) count ++ ; 
        // }
     //   printf("%d " , count ) ; 
     printf("%d " ,B[i] ) ;
    }
}