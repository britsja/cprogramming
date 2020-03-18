#include <stdio.h>

//The CS50 way of implementing string in C



int main(void)
{
	
	char *s = "EMMA";
	//So *s is the address of the first char character and it will take all the
	//char characters until the null \0 where it ends
	printf("%s\n", s);
	//Can still access individual char in char array
	printf("%c\n", s[1]);
}

