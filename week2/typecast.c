#include <stdio.h>

//remember, main can't use function below it called average
//need to declare average function before main executes in C

float average(int length, int array[]);

int main(void)
{
	int n;
	printf("Number of scores: ");
	scanf("%i", &n);

	int scores[n];

	for (int i = 0; i < n; i++)
	{
		printf("Score %i: ", i + 1);
		scanf("%i", &scores[i]);
	}
	//Changed result below to only 1 decimal with .1 between % and f
	printf("Average: %.1f\n", average(n, scores));
}

float average(int length, int array[])
{
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += array[i];
	}
	// Casting the int to a float in order to get a decimal average
	return (float) sum / (float) length;
}