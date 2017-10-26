#include <stdio.h>

int n;
void dzielniki (int n)
{
	int k=1;
	while (k<=n)
	{
		if (n%k==0)
		{
			printf ("%d ",k);
		}
		k++;
	}
}

int main ()
{
	scanf ("%d",&n);
	dzielniki (n);
	return (0);
}
