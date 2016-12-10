#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void main(){
	
srand (time(NULL));
int m, n, *ptr, i, cont, k, j;
char *ptc, pal[100];
	printf("ingrese un tamaño: " );
	scanf("%d", &n);
	ptr = (int *) malloc(n*sizeof(int));
	for(i=0; i<n; i++)
		*(ptr+i) = rand()%100 ;
	for(i=0; i<n; i++)
		printf("%d-",*(ptr+i) );
	printf("\n");	
////////////////////////////////////////////////////////////////////////////////////////
	printf("ingrese un tamaño: " );
	scanf("%d", &n);
	ptc = (char *) malloc(n*sizeof(char));
	for (i=0 ;i<n; i++){
		m = rand()%2;
		if (m==1){
			*(ptc+i) = rand()%('z'-'a'+1) + 'a' ; 
		}
		else{
			*(ptc+i) = rand()%('Z'-'A'+1) + 'A' ; 
		}
	}
	for(i=0; i<n; i++)
		printf("%c",*(ptc+i) );	
	printf("\n");
	getchar();
printf("ingrese una palabra: ");
gets(pal);	
	i=0;
	j=0;
	while(i<n-strlen(pal)){
		while(*(ptc+i+j)==*(pal+j) && j<strlen(pal)){
			j++;
		}
		if(j==strlen(pal)){
		printf("la palabra esta presente en el arreglo aleatorio.\n");
		exit(1);		
	    }
	i++;
	j=0;
}
	printf("la palabra NO esta presente en el arreglo aleatorio.\n");
}
