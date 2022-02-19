#include<stdio.h>
#include<string.h>
#include<math.h>
int h , c , M[105][105] ; 
main(){
    int t ; scanf("%d" , &t ); 

	while(t--){
        int i , j , k ; 
        memset(M ,  0 , sizeof(M)) ; 
        scanf("%d%d" , &h , &c) ; 
        for(i=1 ; i<=h  ; i++){
            for(j=1 ; j<=c ; j++)   scanf("%d" , &M[i][j]) ; 
         }
        int trai =1  , phai = c ; 
        int tren = 1 , duoi = h ; 
        i=1 ; 
        int check = 1 ; 
        while( i<= h*c){
                for(j = trai   ; j<= phai ; j++ ) {
                    printf("%d " ,  M[tren][j]) ; 
                    i++ ; if(i== h*c+1){ check = 0 ;  break ; }
                  }
                  if(check == 0) break ; 
                tren++ ;  
                for(j=tren  ; j<=duoi ; j++){
                    printf("%d " ,  M[j][phai] ) ;  
                    i++ ; if(i== h*c+1){ check = 0 ;  break ; }
                 }
                  if(check == 0) break ; 
                phai-- ; 
                for(j =phai   ; j >= trai ; j-- ) {
                    printf("%d " ,  M[duoi][j]  ) ;   
                    i++ ; if(i== h*c+1){ check = 0 ;  break ; }
                }
                 if(check == 0) break ; 
                duoi-- ; 
                for(j = duoi ; j>=tren ; j--){
                    printf("%d " ,  M[j][trai]  ) ;    
                    i++ ;if(i== h*c+1){ check = 0 ;  break ; }
                }
                 if(check == 0) break ; 
                trai ++ ; 
           }
           printf("\n") ; 
     }
}   