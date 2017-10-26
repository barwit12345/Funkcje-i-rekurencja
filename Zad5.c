#include <stdio.h>

fib (int a)
{
	if (a==0)
	{
		return 0;
	}
	else if (a==1)
	{
		return 1;
	}
	else
	{
		return fib(a)+fib(a-1);
	}
}

int main ()
{
	int n;
	scanf ("%d",&n);
	printf ("%d",fib(n));
	return 0;
}
