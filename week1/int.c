#include <stdio.h>

int main(void)
{
	int age;
	printf("What's your age?\t");
	scanf("%i", &age);
	printf("Your are %i days old", age * 365);
}

