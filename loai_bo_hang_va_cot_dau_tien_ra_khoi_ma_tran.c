#include<stdio.h>
#include<string.h>
#include<math.h>
int M[105][105] ; 
main(){
	int t ; scanf("%d" , &t ); 
    int test = 1 ;
	while(test <=t){
        int h , c ; 
        scanf("%d%d" , &h , &c) ; 
        int i ,  j ; 
        for(i=1 ; i<=h ; i++)
            for(j=1 ; j<=c ; j++){
                scanf("%d"  ,&M[i][j]) ; 
            }

        printf("Test %d:\n" , test) ; 
        for(i=2 ; i<=h ; i++){
            for(j=2 ; j<=c ; j++){
                printf("%d "  ,M[i][j]) ; 
            }
            printf("\n"); 
        }
        test++ ; 
	} 
}