#include<stdio.h>
#include<string.h>
#include<math.h>
int i , j , k ; 
main(){
    int n ; scanf("%d" , &n) ; 
    int M[n] ; 
    for(i=0 ; i<n ; i++)scanf("%d" , &M[i]); 
    int min ; 
    for(i=0 ; i<n-1 ; i++) {
        min = i ; 
        for(j=i+1 ; j<n ; j++) {
            if (M[j] < M[min]) min  = j ; 
        }
        int tmp = M[i]  ; M[i] = M[min] ; M[min] = tmp  ; 
        for(k=0 ; k<n   ; k++ ) printf("%d " , M[k]) ;  
        printf("\n") ; 
    }
}