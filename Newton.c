#include <stdio.h>

int fact(int n)
{
	if (n<=1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}

int main ()
{
	int a,b,c;
	scanf ("%d,%d",&a,&b);
	c=(fact(a)/(fact(b)*fact(a-b)));
	printf("%d\n",c);
	return 0;
}
