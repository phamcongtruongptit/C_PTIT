#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
    float a , b  ; 
    scanf("%f%f" , &a , &b) ; 
    if(a==b && b==0 ) printf("Vo so nghiem") ; 
    else if(a!=b && a== 0 ) printf("Vo nghiem") ; 
    else {
        printf("%.2f" , (b*-1) / a) ; 
    }
}