#include <stdio.h>

dwa (int n)
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return 2*dwa(n-1);
	}
}

int main ()
{
	int j;
	scanf ("%d",&j);
	printf ("%d ",dwa(j));
	return 0;
}
