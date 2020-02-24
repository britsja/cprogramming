#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Checks if argument is handed when executing the program
//In this case we execute the program with a name eg: ./a.out Mike

int main(int argc, char *argv[])
{
	if ( argc == 2)
	{
		printf("Hello, %s\n", argv[1]);
	}
	else
	{
		printf("Hello World\n");
	}	
	
}
