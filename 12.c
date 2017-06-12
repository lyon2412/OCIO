#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
	char c[1000], b[1000];	
	int cont=0, bar=0, i=0, j=0, aux=0;
	printf("ingrese unas palabras:\n");
	gets(c);



	for(i=0; i< strlen(c) ; i++){
		if(c[i]>96 && c[i]< 123)
			c[i] = c[i] - 32 ;
	}
		




	printf("%s\n",c);
	printf("%d\n",strlen(c));


	

	printf("%s\n",c);
	printf("%d\n",strlen(c));

	
	for(i=strlen(c)+1 ; i>=0 ; i--){

		if(65>c[i] || c[i]>90 && c[i] != 10){
			for(j=i ; j< strlen(c)+1 ;j++){
				aux=c[j];	
				c[j]=c[j+1];
				c[j+1]=aux;

			}

		}
	

	}
	
	printf("%s\n",c);
	printf("%d\n",strlen(c));
	
		
	for(i=0; i< strlen(c) ; i++)
		b[i]=c[i];



	for(i=0 ; i< strlen(c)/2 ; i++){
		aux=c[i];
		c[i]=c[strlen(c)-i-1];
		c[strlen(c)-i-1]=aux;
	}

		printf("%s\n",c);

	for(i=0; i< strlen(c) ; i++){

		if(b[i]==c[i])
			cont=cont+1;	
	}
	
	if(cont==strlen(c))
		printf("si es\n");
	else
		printf("no es\n")	;	









		

}

