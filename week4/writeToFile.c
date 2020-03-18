#include <stdio.h>
#include <string.h>


int main(void)
{
	//FILE type, *file pointer, fopen is file open, file name, a is append (r or w)
	//also an option for read or write
	FILE *file = fopen("phonebook.csv", "a");

	char name[20];
	char number[20];

	//Get strings from user
	printf("Name? ");
	scanf("%s", name);
	printf("Number? ");
	scanf("%s", number);	

	//Write strings to file
	fprintf(file, "%s,%s\n", name, number);

	//Close file
	fclose(file);
	
}


