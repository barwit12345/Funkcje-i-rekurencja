#include <stdio.h>

mat (int n)
{
	if (n<=0 || n==10)
	{
		return 0;
	}
	else
	{
		return 2*mat(n-1)+mat(n-2)+5;
	}
}

int main ()
{
	int j;
	scanf ("%d",&j);
	printf ("%d\n",mat(j));
	return 0;
}
