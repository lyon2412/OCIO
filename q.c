#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct alumno{
	char nomb[25], apell[25];
	int cod, nota;
};
void ingresar(struct alumno *lista, int n);
void mostrar(struct alumno *lista, int n);
void ordenar_not( struct alumno *lista, int n);
void ordenar_nom( struct alumno *lista, int n);

void main() {

struct alumno *lista=NULL;
int n;

	printf("cuantos alumnos tendra en su clase: ");
	scanf("%d", &n);
	getchar();
	lista = (struct alunmo *) malloc(n*sizeof(struct alumno));	
	ingresar(lista, n);
	mostrar(lista, n);
	printf("el orden de merito es: \n");
	ordenar_not(lista, n);
	mostrar(lista, n);
	printf("la lista de alumnos en orden alfabetico es: \n");
	ordenar_nom(lista, n);
	mostrar(lista, n);
	
	
}

void ingresar(struct alumno *lista, int n){
int i=0, aux;

	
	for(i=0; i<n; i++){
		printf("ingrese el nombre del alumno numero %d: ", i+1 );
		gets(lista[i].nomb);
		printf("ingrese el apellido del alumno numero %d: ", i+1 );
		gets(lista[i].apell);
		printf("ingrese el codigo del alumno numero %d: ", i+1 );
		scanf("%d", &aux);
		getchar();
		(lista[i].cod) = aux;
		printf("ingrese el ponderado del alumno numero %d: ", i+1 );
		scanf("%d", &aux);
		(lista[i].nota)=aux;
		getchar();

		}
	}
	
void mostrar(struct alumno *lista, int n){

int i=0;
	
	for(i=0; i<n; i++){
		printf("----------------------------------------------------------------" );
		
		printf("Alumno numero %d:\n", i+1 );
		printf("Nombre: ");
		puts(lista[i].nomb);
		printf("Apellido: " );
		puts(lista[i].apell);
		printf("Codigo: %d\n",lista[i].cod );
		printf("Ponderado: %d\n",lista[i].nota );
		
		}
	printf("----------------------------------------------------------------\n" );
}
	
void ordenar_not( struct alumno *lista, int n){
int i, j;
struct alumno aux;

	for(i=1; i<n; i++){
		for(j=i; j<n; j++){
			if(lista[i-1].nota < lista[j].nota){
				aux = lista[i-1];
				lista[i-1] = lista[j];			
				lista[j] = aux;
			} 
		}
	}
}

void ordenar_nom( struct alumno *lista, int n)	{
int i, j;
struct alumno aux;

	for(i=1; i<n; i++){
		for(j=i; j<n; j++){
			if(strcmp(lista[i-1].nomb,lista[j].nomb) > 0){
				aux = lista[i-1];
				lista[i-1] = lista[j];			
				lista[j] = aux;
			} 
		}
	}
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
