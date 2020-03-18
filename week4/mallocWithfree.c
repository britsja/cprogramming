#include <stdio.h>
//Note the extra required library for malloc and strlen
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//First memory allocation example

int main(void)
{
	char *s;
	
	printf("First word: ");
	scanf("%s", s);

    //Allocate memory to t equal to s plus 1 for null char
	char *t = malloc(strlen(s) + 1);

	//Copy string into t from s
	strcpy(t, s);

	t[0] = toupper(t[0]);

	printf("\n%s\n", s);
	printf("%s\n", t);

	//Need to always free up the memory when using malloc;
	free(t);
}

