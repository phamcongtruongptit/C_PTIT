#include<stdio.h>
#include<string.h>
#include<math.h>
//int A[10005]  , B[10005] , b ; 
// void doclap(int A[] , int n){
//     b = 1 ; 
//     memset(B , 0 , sizeof(B)) ; 
//     B[b] = A[1] ; b++ ; 
//     int i ,  j ; 
//     for(i=2 ; i<=n ; i++){
//         int check =  0 ; 
//         for(j = 1 ; j<i ; j++){
//             if(A[i] == A[j]) {
//                 check = 1 ; break ; 
//             }
//         }
//         if(check == 0 ) {
//             B[b] = A[i] ; 
//             b++ ; 
//         }
//     }
// }
void solve() {
        int n ; scanf("%d" , &n) ; 
        int A[n+5] ; 
        // memset(A , 0  , sizeof(A)) ; 
        // memset(B , 0  , sizeof(B)) ;
        int i , j ; 
        for(i=1 ; i<=n ; i++) scanf("%d" , &A[i]) ; 
        // doclap(A , n) ; 
        // int count = 0 ; 
        // for(i=1 ; i<b ; i++){
        //     count = 0 ; 
        //     for(j=1 ; j<=n; j++){
        //         if(B[i] == A[j] ) count++ ; 
        //     }
        //     if(count > 1) {printf("%d\n" , B[i] ) ;return ;  }
        // }
        for(i=1 ; i<n ; i++){
            for(j=i+1 ; j<=n ; j++) {
                if(A[i] == A[j] ){
                    printf("%d\n" , A[i])  ; 
                    return ; 
                }
            }
        }
        printf("NO\n") ; 
}
main(){
    int t ; scanf("%d" , &t ); 
	while(t--){
        solve() ; 
}
}