#include <stdio.h>

int factorial(int num)
{
	if (num < 2)
		return (1);
	return(num * factorial(num-1));
}

int main(void)
{
	int num = factorial(4);
	printf("%d\n", num);
}
