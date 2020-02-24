#include <stdio.h>

/*
	Argc is the int indicating how many arguments the program is executed with
	Argv argument 1(position 0) is the actual command to execute the program
	argument 2(position [1]) is the argument added to the command, in this example a name
	Argc will be 1 if program executed without arguments and 2 if executed with arguments.
*/

int main(int argc, char *argv[])
{
	//Check if argc contains argument and print error message
	if (argc != 2)
	{
		printf("missing command-line argument\n");
		printf("Argc is: %i", argc);
		//Return 1 stops the program
		return 1;
	}
	//This will basically execute if argv is 2 and shows the value of argc and the arguments in argv 
	printf("hello, %s\n", argv[1]);
	printf("Argv1 is %s and Argv2 is %s\n", argv[0], argv[1]);
	printf("Argc is: %i", argc);
	return 0;
	
}
