#include <stdio.h>

int main(void)
{
	int x;
	printf("Enter an Integer between 1 and 5:\n");
	scanf("%i", &x);

	switch(x)
	{
		case 1:
			printf("You entered ONE!\n");
			break;
		case 2:
			printf("You entered TWO!\n");
			break;
		case 3:
			printf("You entered THREE!\n");
			break;
		case 4:
			printf("You entered FOUR!\n");
			break;
		case 5:
			printf("You entered FIVE!\n");
			break;
		default:
			printf("Sorry, terrible option\n");
			break;
	}
}