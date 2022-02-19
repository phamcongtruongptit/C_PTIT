#include<stdio.h>
#include<string.h>
#include<math.h>
main() {
    int M[27] ; M[0] = 0 ; 
    int a,b,i,j,s ,x; 
    s=64 ;
    for( i=1 ; i<27 ; i++){
        M[i] = s ; s++; 
    } 
    scanf("%d%d" , &a, &b) ; 
    int max = (a>b)?a:b ; 

    int K[a+1][b+1] ; 
    memset(K , 0 , sizeof(K)) ; 


	for(i=1 ; i<=a ; i++){
		if(i<=b) K[i][1] = i ; 
		else K[i][1] = b ; 
		for(j=2 ; j<=b ; j++){
			s = K[i][j-1] ; 
			if(s<b){
				s++ ; 
				K[i][j] = s ; 
			} else if(s==b){
				//s=1 ;
				for(x=b; x>=j; x--){
					K[i][x] = s ; 
				//	s++ ; 
				}
				break ; 
			}
		} 
	}


    for(i =1 ; i<=a ; i++){
                for(j=1 ; j<=b ; j++) printf("%c" , (char)(M[K[i][j]])) ; 
        printf("\n") ;
    }
}