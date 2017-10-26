#include <stdio.h>

int suma (int n)
{
	if (n%2==0)
	n=n-1;
	if (n%2==1)
	{
		return (n+suma(n-2));
	}
	if (n==1)
	{
		return n;
	}
}

int main ()
{
	int n,k;
	scanf ("%d",&k);
	suma (k);
	printf ("%d",n);
	return 0;
}
