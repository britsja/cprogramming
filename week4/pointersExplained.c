#include <stdio.h>

void swap(int *a, int *b);
// Demonstrated the need to reference the address of a variable

int main(void)
{
	int x = 1;
	int y = 2;

	printf("x is %i, y is %i\n", x, y);
	
	swap(&x, &y); //Pass in the address of x and y and not just the values
	
	printf("x is %i, y is %i\n", x, y);
		
}

void swap(int *a, int *b) //* pointer to an int
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	
}
