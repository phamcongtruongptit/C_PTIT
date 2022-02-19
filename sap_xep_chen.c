#include<stdio.h>
#include<string.h>
#include<math.h>
int i , j , k ; 
main() {
    int n ;  scanf("%d" , &n) ; 
    int a[n] ; 
    for( i=0 ; i<n ; i++) scanf("%d" , &a[i]); 
     int t;
    printf("Buoc 0: %d\n" ,a[0] )  ;
    for(i=1;i<n;i++)
    {
       j=i-1;
       t=a[i];
       while(j >= 0 && t < a[j])
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=t; // Chèn
       printf("Buoc %d: " ,i )  ; 
       for(k=0 ; k<=i ; k++) printf("%d " , a[k]) ; 
       printf("\n") ; 
    }  

}