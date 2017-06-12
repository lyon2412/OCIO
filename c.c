#include<stdio.h>
#include<string.h>
#include<stdlib.h>
	void main(){
	char c[1000];
	int i, j, aux;
	printf("Ingrese un cadena de caracteres: ");
	gets();
	for(i>0;i<strlen(c);i++){
        	if(c[i]>96&&c[i]<123) {
			c[i]=c[i]-32;
		}
	}             
	printf("%s\n",c);
	printf("%d\n",strlen(c));

	for(i=strlen(c)+1; i>=0; i--){
		if(' '=c[i]){
			for(j=i; j<strlen(c)+1; j++){
				aux=c[i];
				c[i]=c[i+1];
				c[i+1]=aux;
			}
		}
	}

	printf("%s\n",c);
	printf("%d\n",strlen(c));

}
