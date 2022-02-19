#include<stdio.h>
#include<string.h>
#include<math.h>
main(){
	int t ; scanf("%d" , &t ); 
	while(t--){
        double a , b , c , d ; 
        scanf("%lf%lf%lf%lf" , &a,&b,&c,&d) ; 
        // long long k  = (c-a)*(c-a) + (d-b)*(d-b) ; 
        // double kc = sqrt(k)  ; 
        // printf("%.4lf\n" , kc) ; 
        double KC=sqrt((a-c)*(a-c)+(b-d)*(b-d)); 
        printf("%.4lf\n",KC);
}
}