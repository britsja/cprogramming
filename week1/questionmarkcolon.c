#include <stdio.h>

//Dont execute, this is example of ternary operator
//Looks like it is handy to use in places where if else cant be used, inside condition or method parameters

int main(void)
//Fake if statement which is exactly the same as the code below the if else
{
	int x;

	if (expr)
	{
		x = 5;
	}
	else
	{
        x =6;
	}
}

//The above can be expressed as:

int x = (expr) ? 5 : 6;