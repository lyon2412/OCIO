#include<stdio.h>

void main(){

	int i, n=0, m=0, d=0, c=0;

	printf("ingrese un numero de 4 cifras: ");
	scanf("%d", &n);
	if(n<0 || n>9999)
	printf("numero no valido.\n");
	else{

		if(n-1000<0) 
		m=0;
		else{

			for(i=0; i<10; i++){
				if(n-(i*1000)<1000){
					m=i;
					n = n-m*1000;
					break;
				}
			}
		}
		if(n-100<0) 
		c=0;
		else{
			for(i=0; i<10; i++){
				if(n-(i*100)<100){
					c=i;
					n = n-c*100;
					break;
				}
			}
		}
		if(n-10<0) 
		d=0;
		else{
			for(i=1; i<10; i++){
				if(n-(i*10)<10){
					d=i;
					n = n-d*10;
					break;
				}
			}
		}
printf("1: %d\n10: %d\n100: %d\n1000:%d\n", n, d, c, m );	
	}		
}
