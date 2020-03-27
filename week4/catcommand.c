#include <stdio.h>

int main(int argc, char * argv[])
{
	//Check if file given as argument
	if (argc != 2)
	{
		printf("Missing file for printing to screen!\n");
		return 1; //stops program
	}

	

	FILE* ptr = fopen(argv[1], "r");
	char ch;
	while((ch = fgetc(ptr)) != EOF)
	{
		printf("%c", ch);
	}
	
}


