#include<stdio.h>
#include<string.h>
#include<math.h>
int A[105]  , B[105] , b ; 
void doclap(int A[] , int n){
    b = 1 ; 
    memset(B , 0 , sizeof(B)) ; 
    B[b] = A[1] ; b++ ; 
    int i ,  j ; 
    for(i=2 ; i<=n ; i++){
        int check =  0 ; 
        for(j = 1 ; j<i ; j++){
            if(A[i] == A[j]) {
                check = 1 ; break ; 
            }
        }
        if(check == 0 ) {
            B[b] = A[i] ; 
            b++ ; 
        }
    }
}
main(){
    int n ; scanf("%d" , &n) ; 
    int i , j ; 
    for(i=1 ; i<=n ; i++) scanf("%d" , &A[i]) ; 
    doclap(A , n) ; 
    int count = 0 ; 
    for(i=1 ; i<b ; i++){
        int c = 0 ; 
        for(j = 1 ;j <=n ; j++){
            if(B[i]  == A[j]) {
                c ++ ; 
            }
        }
        if(c==1 ) count ++ ; 
    }
    printf("%d\n" , count) ; 
    for(i=1 ; i<b ; i++){
        int c = 0 ; 
        for(j = 1 ;j <=n ; j++){
            if(B[i]  == A[j]) {
                c ++ ; 
            }
        }
        if(c==1 )  printf("%d " , B[i])   ; 
    }
}