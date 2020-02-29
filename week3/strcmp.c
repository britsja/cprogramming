#include <stdio.h>
#include <string.h>

int main(void)
{
	char names[4][10] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};

	for (int i = 0; i < 4; i++)
	{
		if (strcmp("EMMA", names[i]) == 0)
		{
			printf("Found\n");
			return 0;
		}
	}
	printf("Not Found");
	return 1;
}
