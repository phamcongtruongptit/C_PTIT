#include<stdio.h>
#include<string.h>
void xoas(char *s, int n){
    memmove(s , s+ n ,  strlen(s+n) +1  )  ;
}
main(){
    // char s[] = "thu xoa 12345" ; 
    // xoa(s,2) ; puts(s) ; 
    // xoa(s+4 , 3)  ;puts(s) ; 
    char s[1000] , xoa[1000] ; 
    gets(s)  ; gets(xoa) ; 
    int n = strlen(s) , x = strlen(xoa) ; 
    int i , j ; 
    for(i=0 ; i<n-x-1 ; i++){
        int  k   ; 
        if(s[i] == xoa[0]){
            k = 0 ; int c = 1 ;  
            for(j=1 ; j<x ; j++){
                if(s[i+c] == xoa[j]){
                    k=0 ; c++ ;  
                } else {
                    k=1 ; break ; 
                }
            }
        }
        if(k==0){
                xoas(s+i , x ) ; 
        }
    }
    puts(s) ; 
}