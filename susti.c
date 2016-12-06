#include<stdio.h>
#include<stdlib.h>

void ingresar(int *x ,int n ,int m);
int promedio(int *x ,int n);

void main(){

	int prom, sust, h, m, l, n, *p;

	printf("ingrese numero de practicas: ");
	scanf("%d", &n);
	
	p = (int*) malloc(n*sizeof(int));
	
	ingresar(p,0,n);
	
	printf("ingrese numero de laboratorios: ");
	scanf("%d", &l);
	
	p = (int*) realloc(p,(l+n)*sizeof(int));
	
	ingresar(p,n,n+l);
	
	prom = promedio(p,l+n);
	
	printf("ingrese nota de parcial: ");
	scanf("%d", &m);
	
	h = 30 - prom - m;
	
	if(h<21){
		printf("usted nesecita %d en el final para aprobar. \n", h);
	}
	else{
		printf("usted no aprobara con final, cuanto cree que sacra en el final?: ");
		scanf("%d",&h);
		if(m<=h){
			sust = 30 - h - prom;
	 		printf(" necesita un %d en el susti.\n",sust);
	 	}
	 	else{
	 		sust = 30 - m - prom;
			printf("necesita un %d en el susti.\n",sust);	
		}
		
	}	
	
}
	
	
void ingresar(int *x ,int n ,int m){
	int i;
	
	for(i=n; i<m; i++){
		printf("ingrese la nota numero %d: ",i+1);
		scanf("%d", &*(x+i)); 
	}
}	

int promedio(int *x ,int n){
	int i, sum=0;
	for(i=0; i<n; i++)
		sum = sum + *(x+i);
	return (sum/n);
} 
