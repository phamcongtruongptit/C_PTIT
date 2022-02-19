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
int checknt(int n){
    int i ; 
    if(n==1 )return 0 ; 
    if(n==2) return 1 ; 
    for(i=2 ; i<=sqrt(n) ; i++) {
        if(n%i == 0 ) return 0  ; 
    }
    return 1; 
}
main(){
    int t ; scanf("%d" , &t) ; int test =1 ; 
    while(test<=t) {
        int A[10005] ;  memset(A , 0 ,sizeof(A)) ; 
    int b =  1; 
    int n ; scanf("%d" , &n) ; 
    int i, j ; 
    for(i=1  ; i<=n  ; i++){
        scanf("%d", &A[i]) ; 
    }
    doclap(A , n , &b ) ; 
    printf("Test %d:\n" , test) ; 

    for(i=1 ; i<b-1 ; i++){
        for(j=i+1 ; j<b ; j++){
            if(B[i] > B[j]) {
                int tmp = B[j] ; B[j] = B[i] ; B[i] = tmp ;   
            }
        }
    }
    for( i =1 ; i<b ; i++){
        if(checknt(B[i])) {
                    int count = 0 ; 
            for(j=1 ; j<=n ; j++){
            if(A[j] == B[i]) count ++ ; 
            }
            printf("%d xuat hien %d lan\n" ,B[i] , count )  ;
        }
    }
    test ++ ; 
    }

}