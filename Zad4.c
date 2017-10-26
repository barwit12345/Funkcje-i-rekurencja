#include <stdio.h>

void square (int a)
{
	int i;
	for (i=1;i<=a;i=i+2)
	{
		printf ("%d ",i*i);
	}
}

int main ()
{
	int n;
	scanf ("%d",&n);
	square (n);
	return 0;
}
