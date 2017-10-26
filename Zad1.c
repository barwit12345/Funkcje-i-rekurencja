#include <stdio.h>

float a,h;
float pole(float a, float h)
{
	return (a*h/2);
}

int main ()
{
	printf ("Podaj długość podstawy i wysokość oddzielone przecinkiem ");
	scanf ("%f,%f",&a,&h);
	float s = pole(a,h);
	printf ("%f",s);
	return (0);
}
