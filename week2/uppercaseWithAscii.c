#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100];
	printf("Input: ");
	scanf("%s", s);
	int len = strlen(s);

	for (int i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			// Convert to uppercase in ascii by deducting 32
		    printf("%c", s[i] - 32);
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	
}
