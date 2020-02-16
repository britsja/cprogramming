#include <stdio.h>

int main(void)
{
	float price;
	printf("What's the price?\n");
	scanf("%f", &price);
	printf("The price with tax is: %.2f\n", price * 1.07); 
}

