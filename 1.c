#include <stdio.h>
#include <stdlib.h>
#define LonMax 99
char cad[LonMax + 1], cod[LonMax + 1];
char ch;
int a, b, c, d, i, n, m, aux, j, k=0;

int longitud ();
void ingresar_cadena ();
void invertir(int n);
int comparativo();
void elimina(int n, int m);
void homogeneizar(int n);
int ceros_juntos(int n);

/////////////////////////////////////////////////////////////////////

void main ()
{
ingresar_cadena ();
a=longitud ();
printf("\n%s\n", cad);
d=ceros_juntos(a);
elimina(a,d);
printf("\n%s\n", cad);
b=longitud ();
homogeneizar(b);
printf("\n%s\n", cad);
invertir(b);
printf("\n%s\n", cod);
c=comparativo ();

if(c==1)
	printf("no es palindromo\n");
else
	printf("es palindromo\n");
}
/////////////////////////////////////////////////////////////////////////

void ingresar_cadena (){
printf("\n Ingrese una palabra o frase de a lo más %d caracteres : ", LonMax);
//ch = getchar();
i = 0;
while (ch != '\n'){
cad[i++] = ch;
ch = getchar();
}
cad[i] = '\0';
}

int longitud (){
i = 0;
while (cad[i] != '\0')
i++;
return i;
}

void invertir(int n){
	for(i=0;i<=n;i++){
		cod[n-i-1] = cad[i];		
		}
}

int comparativo(){
	i, j=0;

	for(i=0; i< b; i++){
		if(cad[i] == cod[i])
			j++;		
        }
	if(j==b)
		return 0;
	else
		return 1;
}

void elimina(int n,int m){
	int l=0;
	do{
	for(i=0;i<=n;i++){
        if(cad[i]==32){
            for(j=i;j<=n;j++){
                aux=cad[j];
                cad[j]=cad[j+1];
                cad[j+1]=aux;
            }
		}
	}
	l=l+1;
	}
	while(l<=m);
}

void homogeneizar(int n){
	for(i=0;i<=n;i++){
        if(64<cad[i] && cad[i]<91){
            cad[i]=cad[i]+32;
		}
	}
}

int ceros_juntos(int n){
	int cont=0, resp=2;
	for(i=0;i<=n;i++){
		if(cad[i]==32 && cad[i+1]==32){
		    while (cad[i] == 32){
			    i++;
				cont=cont+1;
			}
		}
		if(cont>resp){
			resp=cont;	
		}
	}
	return resp;
}
