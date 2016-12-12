
#include<stdio.h> 

void main (){
	int a, b, r=0, d;
	char op;
	printf("ingrese primer entero:");
	scanf("%d",&a);
	printf("ingrese segundo entero:");
	scanf("%d",&b);
	getchar();
	printf("Ingrese operador 1.+ 2.- 3.* 4./"); 
	scanf("%c",&op);
	
	switch(op){
		case '+' : r = a + b ; break;
		case '-' : r = a - b ; break;
		case '*' : r = a * b ; break;
		case '/' : r = a / b ; break;
		   }

	printf("el resultado es %d\n",r);
}
