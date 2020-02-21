#include <stdio.h>

int main(void)
{
	int ch;

	printf("Press Enter: ");
	//getchar here helps to pause the program until enter is pressed
	getchar();
	ch = 'H';
	putchar(ch);
	ch = 'i';
	putchar(ch);
	putchar('!');
	return(0);
}
