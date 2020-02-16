#include <stdio.h>
//Because C is old and dumb, it doesn't see the cough function below int main.
//Initialising cough function at the top kinda fools C into making this work.
void cough(int n);

int main(void)
{
	cough(3);
}

void cough(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("cough\n");
	}
	
}