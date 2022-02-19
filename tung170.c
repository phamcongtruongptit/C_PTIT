#include <stdio.h>
void solve(int n){
    int i = 2 , count  ; 
    while(n>1){
        count  =   0  ;
        while(n % i == 0){
            n/=i ; 
            count++ ; 
        }
        if(count != 0) {
            printf("%d(%d) " , i  , count ) ; 
        }
        i++ ; 
    }
}
int main()
{
    int t ; int k = 1 ; //
    scanf("%d", &t);
    while(k<=t){
        int n ; 
        scanf("%d", &n) ; 
        printf("Test %d: " , k );
        solve(n) ;
        printf("\n"); 
        k++ ; 
    }
    
    return 0;
}
