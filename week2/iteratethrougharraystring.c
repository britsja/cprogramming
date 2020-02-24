#include <stdio.h>

int main(void)
{
	char prompt[] = "Press Enter to explode: ";
	int array_size = sizeof(prompt);

	for(int i = 0; i < array_size; i++)
	{
		printf("%c\t", prompt[i]);		
	}

	return(0);
}
