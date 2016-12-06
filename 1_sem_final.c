#include<stdio.h>
#include<stdlib.h>
#define longmax 1000

void main(){

	int cont=0, j, i=0, n, B[26], b[26];
	char ch, a[longmax];

	printf("teclee algo:\n");
	
	while((ch = getchar()) != '\n'){
		*(a+i) = ch;
		i++;
	}
	*(a+i) = '\0';
	
	n = i;
	i = 0;
	
	for(j=65;j<91;j++){
		for(i=0;i<n;i++){
			if(*(a+i)==j)
				cont++;
		}
		*(B+j-65)=cont;
		cont=0;
	}
	
	i=0;
	cont=0;
	
	for(j=97;j<123;j++){
		for(i=0;i<n;i++){
			if(*(a+i)==j)
				cont++;
		}
		*(b+j-97)=cont;
		cont=0;
	}
	
	i=0;
	
	for(i=0;i<26;i++)
		printf(" %c = %d || %c = %d\n ",i+65,*(B+i), i+97, *(b+i));
}
