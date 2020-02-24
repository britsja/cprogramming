#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
			// Convert to uppercase using toupper function - had to add ctype.h at the top
		    printf("%c", toupper(s[i]));
		}
		else
		{
			printf("%c", s[i]);
		}
	}
	
}
