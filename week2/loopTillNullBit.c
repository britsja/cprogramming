#include <stdio.h>

int main(void)
{
	char yourname[100];
	printf("Input: ");
	scanf("%s", yourname);

	for (int i = 0; yourname[i] != '\0'; i++)
	{
		printf("%c ", yourname[i]);
	}
}
