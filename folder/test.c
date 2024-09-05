#include <stdio.h>
int main()
{
	double a = 2.5584935654943;
	
	printf("before setting the precision \nnumber is: %lf", a);

	printf("\nafter setting the precision \nnumber is: %.2lf", a);
}