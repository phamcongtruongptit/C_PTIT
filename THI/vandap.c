#include<stdio.h>
#include<string.h>
int main(){
		char a[50];
		scanf("\n");
		gets(a);
	    int x=0 ,j=0 , l=strlen(a), vt ,i ;
	    while(a[x]==' ') {
	    	x++;
	    	j++;
		}
		
	    while(a[l-1]==' '){
		l--;
		}
	    
	    while(x<l){
	    	if(a[x]==' ') {
	    		vt=x; /* vt luu vi tri ma het ho */
                break;
            }
	    	x++;
        }
/* INPUT
ngUYEN     van nam   
OUTPUT
Van Nam, NGUYEN
 */
		for(i=x;i<l;i++){
			if(a[i-1]==' ' && a[i]!=' '){  /* in chữ hoa đầu tiên ở tên đệm và tên */
				if(a[i]>=97 && a[i]<=122) {
				a[i]=a[i]-32;
			}
				printf("%c",a[i]);
				
			} else if(a[i-1]!=' ' && a[i]!=' ' && a[i+1]!=' '){ /* in chữ thường ở tên và đệm ở giữa */
                if(a[i]>=65 && a[i]<=90) {
                    a[i]=a[i]+32;
                }
                printf("%c",a[i]);
			}
			else if( a[i-1]!=' ' && a[i]!=' ' && a[i+1]==' '){  /* /* in chữ thường ở tên và đệm ở phần cuối cái chữ */
				if(a[i]>=65 && a[i]<=90){
                    a[i]=a[i]+32;
                }
				if(i!=l-1) {
                    printf("%c",a[i]);
                    printf(" ");
                }
                else printf("%c",a[i]);
			}
			
        }

		printf(", ");


		for(i=j;i<vt;i++){
			if(a[i]>=97 && a[i]<=122){
				a[i]=a[i]-32;
			}
			printf("%c",a[i]);
		}
}

