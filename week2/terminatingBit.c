#include <stdio.h>

int main(void)
{
	const char *names[]= {"EMMA", "RODRIGO", "BRIAN", "DAVID"};

	printf("%s\n", names[0]);
	printf("%c%c%c%c%i\n", names[0][0], names[0][1], names[0][2], names[0][3], names[0][4] );
}
