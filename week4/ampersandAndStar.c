#include <stdio.h>

//CS50 class: See memory location of int
int main(void)
{
	int n = 50;
	//Percent p prints the address, &ampersand is the memory pointer(addr)
	printf("%p\n", &n);
	//The star says go to specific address
	printf("%i\n", *&n);
}