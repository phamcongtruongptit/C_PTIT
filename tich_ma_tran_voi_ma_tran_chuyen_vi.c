#include<stdio.h>
#include<string.h>
#include<math.h>
int M[100][1005] , C[100][100] , kq[100][100] ; 
main(){
    // int o  =1 , t ; 
    // scanf("%d" , &t) ; 
    // while(o<=t){
        memset(M , 0 , sizeof(M)) ; 
        memset(C , 0 , sizeof(C)) ; 
        memset(kq , 0 , sizeof(kq)) ; 
        int  h , c ;  // [h,c] x [c , h] = [h,h]
        scanf("%d%d" , &h , &c) ; 
        int i ,  j, k  ; 
        for(i=1 ; i<=h  ; i ++)
        for(j=1 ; j<=c ; j++){
            scanf("%d" , &M[i][j]) ; 
            C[j][i] = M[i][j] ; 
        }

        for(i=1; i<=h ; i++){
            for(j=1 ; j<=h; j++){
                int tong = 0 ; 
                for(k=1 ; k<=c ; k++){
                    int check =  (M[i][k] * C[k][j]) ; 
                    tong+=check ; 
                }
                kq[i][j] = tong ; 
            }
        }

        //printf("Test %d:\n" , o) ; 
        for(i=1 ; i<=h ; i++)   
            {
                for(j=1 ; j<=h ; j++) printf("%d " , kq[i][j]) ; 
                printf("\n") ; 
            }


    //     o++; 
    
    // }

}