#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[20];
	char number[20];
}
person;

int main(void)
{
	person staff[4];

	strcpy(staff[0].name, "EMMA");
	strcpy(staff[0].number, "617-555-0100");

	strcpy(staff[1].name, "RODRIGO");
	strcpy(staff[1].number, "617-555-0101");

	strcpy(staff[2].name, "BRIAN");
	strcpy(staff[2].number, "617-555-0102");

	strcpy(staff[3].name, "DAVID");
	strcpy(staff[3].number, "617-555-0103");

	for (int i = 0; i < 4; i++)
	{
		if (strcmp(staff[i].name, "BRIAN") == 0)
		{
			printf("%s\n", staff[i].number);
			return 0;
		}
	}
	printf("Not Found\n");
	return 1;
}
