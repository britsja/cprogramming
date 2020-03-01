#include <stdio.h>

//Example of using fgets instead of scanf to allow for blank spaces in received input

int main(void)
{
	char name[10];

	printf("What is your name and surname?\n");
	fgets(name, 10, stdin);
	printf("Glad to meet you, %s.\n", name);
	return 0;
}

