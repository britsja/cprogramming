#include <stdio.h>
//Because C is old and dumb, it doesn't see the cough function below int main.
//Initialising cough function at the top kinda fools C into making this work.
void cough(void);

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		cough();
	}
}

void cough(void)
{
	printf("cough\n");
}