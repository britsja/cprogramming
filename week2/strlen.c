#include <stdio.h>
#include <string.h>

int main(void)
{
	char yourname[100];
	printf("Input: ");
	scanf("%s", yourname);

	int len = strlen(yourname);

	for (int i = 0; i < len; i++)
	{
		printf("%c ", yourname[i]);
	}
}
