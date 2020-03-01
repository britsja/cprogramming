#include <stdio.h>
#include <string.h>

//Recursion exercise with Collatz

int collatz(int n);

int main(void)
{
	int value;
	printf("Collatz Conjecture - Which value would you like to check?\n");
	scanf("%i", &value);

	collatz(value);
}

int steps = -1;

int collatz(int n)
{
	steps++;
	//Base Case
	if (n == 1)
	{
		printf("Success - it took %i steps\n", steps);
		return 0;
	}
	//even numbers
	else if ((n % 2) == 0)
	{
		return 1 + collatz(n/2);
	}
	//odd numbers
	else
	{
		return 1 + collatz(3*n + 1);
	}
}