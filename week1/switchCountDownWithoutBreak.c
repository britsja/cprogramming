#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter an Integer between 1 and 5:\n");
	scanf("%i", &x);

	switch(x)
	{
		case 5:
			printf("Five...\n");			
		case 4:
			printf("Four...\n");			
		case 3:
			printf("Three...\n");		
		case 2:
			printf("Two...!\n");			
		case 1:
			printf("One...\n");		
		default:
			printf("Blast Off!\n");			
	}
}