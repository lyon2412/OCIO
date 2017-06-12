#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

void main(){
	
srand (time(NULL));
int m, n, i, k, j;
char *ptc, pal[100], op;	
////////////////////////////////////////////////////////////////////////////////////////
	printf("ingrese el tamaño de su sopa de letras: " );
	scanf("%d", &n);
	ptc = (char *) malloc(n*sizeof(char));
	for (i=0 ;i<n; i++){
		m = rand()%9;
		if (m<8){
			*(ptc+i) = rand()%('z'-'a'+1) + 'a' ; 
		}
		/*else if(m<8){
			*(ptc+i) = rand()%('Z'-'A'+1) + 'A' ; 
		}*/
		else{
			*(ptc+i) = ' ' ; 
		}
	}
	for(i=0; i<n; i++)
		printf("%c",*(ptc+i) );	
	printf("\n");
	do {
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
				printf("\nla palabra esta presente en el arreglo aleatorio.\n");
				break;		
			}
			i++;
			j=0;
		}
		if(j==0){
			printf("\nla palabra NO esta presente en el arreglo aleatorio.\n");
		}
		printf("\ndesea ingresar otra palabra:s/n\n");
		scanf("%c", &op);
		 system ("clear"); 
	}
	
	while(op='s');
	free(ptc);
	
}
