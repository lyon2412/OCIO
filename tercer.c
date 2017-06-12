#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(){
	
	char cad[1000], caracter;
	int i=0, cont=0;
	
	printf("ingrese una cadena de caracteres: ");
	gets(cad);
	printf("ingrese un caracterer:");
	scanf("%c", &caracter);
	for(i=0; i<strlen(cad); i++){
		if(cad[i]==caracter)
			cont=cont+1;
	}	
	printf("el caracter introducido se repite %d veces\n", cont);
	
}
