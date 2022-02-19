#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    int t ; scanf("%d", &t);
    while(t--){
        int n ; scanf("%d", &n);
        int count = 0  , i ,  j ; 
        for(i=1 ; i<=sqrt(n); i++){
            if (n%i == 0){
                if(i != n/i){ // khác nhau   
                    if(i%2 == 0 ) count++ ; 
                    if((n/i) % 2 == 0) count++ ; 
                }
                else { // nếu i và n/i bằng nhau
                    if(i% 2 == 0) count++ ; 
                }
                
            }
        }
        printf("%d\n", count) ; 
    }
}



