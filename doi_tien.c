#include<stdio.h>
#include<string.h>
#include<math.h>
int i , j , k ; 
int coin[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000} ; 
int count[] = { 0 , 0 , 0 ,0 , 0 , 0 , 0 , 0 ,0  , 0 } ; 
int giatri ; 
void input(){
    scanf("%d"  , &giatri) ;  
}
int soto() {
    for( i = 9 ; i>= 0 ; i--) {
        while( giatri >= coin[i] ){
            giatri -= coin[i] ; 
            count[i]++ ; 
        }
    }
    int sum = 0 ; 
    for( i=0 ; i<10 ; i++) {
        sum+=count[i] ; 
        count [ i] = 0 ; 
    }
    return sum ; 
}
void solve() {
    input() ; 
   printf("%d\n" , soto()) ;  
}
main() {
    int t ;   scanf("%d"  , &t) ;  
    while(t--) {
        solve() ; 
    }
}