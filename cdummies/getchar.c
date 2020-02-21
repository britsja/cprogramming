#include <stdio.h>

int main(void)
{
	int c;

	printf("I'm waiting for a character: ");
	//getchar is actually a macro for function getc() in stdio.h
	c = getchar();
	printf("I waited for the '%c' character.\n", c);
	return(0);
}
