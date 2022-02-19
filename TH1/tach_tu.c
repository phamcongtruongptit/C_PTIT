#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    char s[1000] ; 
    gets(s) ; 
    char *p  ; 
     p = strtok( s , " " ) ; 
     while(p!= NULL){
         puts(p) ; 
         p = strtok(NULL , " ") ; 
     }
}