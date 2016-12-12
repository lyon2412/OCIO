#include <stdio.h>
int main ( )
{
long int n, i, fibonacci[1000];

printf("ingrese un numero menor a 1000:");
scanf("%li", &n);
//asigna valores a los primeros valores de la cadena 
fibonacci[0] = 1;
fibonacci[1] = 1;
// asigna valores a la cadena desde la pos 2  hasta el valor n
for(i = 2 ; i < n ; i++)
	fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
//imprime los valores de la cadena
for(i = 0 ; i < n ; i++)
	printf (" fibonacci[%li] = %li \n", i, fibonacci[i]);
}
