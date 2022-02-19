#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    char s1[1000] , xoa[100] ; 
    gets(s1)  ; gets(xoa) ; 
    char *p ; 
    p = strtok(s1 , " " ) ; 
    char kq[] = "" ; 
    while(p!= NULL){
        if(strcmp(p , xoa) != 0){
             strcat(kq , p) ; 
        }
        p = strtok(NULL , " ") ; 
    }
    puts(kq) ; 
}
