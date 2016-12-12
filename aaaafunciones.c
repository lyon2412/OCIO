#include<stdio.h>
#include<math.h>
int n, y, x;
void main(){
	printf("n:");
	scanf("%d",&n);
	for(y=-n+1 ; y<n ; y++){
		for(x=-n+1 ; x<n ; x++)  {
			if( abs(y) <= abs(x) || abs(x) <= abs(y))
				 printf("* ");
			else printf("  ");
		   } 
                printf("\n");
	}
}
