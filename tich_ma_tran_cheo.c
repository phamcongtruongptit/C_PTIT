#include<stdio.h>
#include<string.h>
#include<math.h>
int M[100][100] , C[100][100] , kq[100][100] ,  n ; 
main(){
	int t , i , j ,k, test = 1 ; scanf("%d" , &t ); 
	while(test<=t){
        scanf("%d" , &n) ; 
        memset(M , 0 , sizeof(M)) ; 
        for(i=1 ; i<=n ;i++){
            for(j=1 ; j <=i ; j++) M[i][j] = j  ; 
        }
        for(i=1 ; i<=n  ; i ++)
            for(j=1 ; j<=n ; j++){ 
                C[j][i] = M[i][j] ; 
        }
        for(i=1; i<=n ; i++){
            for(j=1 ; j<=n; j++){
                int tong = 0 ; 
                for(k=1 ; k<=n ; k++){
                    int check =  (M[i][k] * C[k][j]) ; 
                    tong+=check ; 
                }
                kq[i][j] = tong ; 
            }
        }

        printf("Test %d:\n" , test) ; 
        for(i=1 ; i<=n ; i++) {
            for(j=1 ; j<=n ; j++){
                printf("%d ", kq[i][j] ) ; 
            }
            printf("\n") ; 
        }

        test++ ; 
	} 
}