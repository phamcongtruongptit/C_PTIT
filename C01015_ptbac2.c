#include<stdio.h>
#include<math.h>
main(){
    float a , b , c ; 
    scanf("%f %f %f" , &a , &b , &c)  ;
    float den = b*b - 4*a*c ; 
    if(den<0){
        printf("NO");
    }
    else if(den == 0 ){
        printf("%0.2f" , ((-1)*b) / (2*a) ) ; 
    }
    else {
         float x1 = ((-1)*b + sqrt(den) ) / (2*a)  ; 
         float x2 = ((-1)*b - sqrt(den) ) / (2*a)  ; 
        printf("%0.2f %0.2f" , x1,x2) ; 
    }
} 