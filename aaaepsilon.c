#include <stdio.h>
#include <math.h>

int main ()
{
    const float L = log(2);
    float s, epsilon, n = 2;
	
	printf (" Ingrese un un margen de error (epsilon): ");
	scanf ("%f", &epsilon);

    printf (" L = %f\n", L);
	for (s = 1 ; fabs(s - L) > epsilon ; )
	{
	    printf (" s = %f\n", s);
	    if ( ((int) n)%2 == 0 )
            s = s - 1/n;
        else
            s = s + 1/n;
        n = n + 1;
	}

	printf (" La primera suma parcial es %f\n", s);

}
