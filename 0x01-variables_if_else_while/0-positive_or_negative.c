#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float n;
	scanf("%f",&n);
	if(n>0)
	{
		printf("%f is positive",n);
	}
	else if(n<0)
	{
		printf("%f is negative",n);
	}
	else
	{
		printf("%f is zero",n);
	}
	return (0);
}
