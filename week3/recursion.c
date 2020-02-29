#include <stdio.h>
#include <string.h>

void draw(int h);

int main(void)
{
	int height;
	printf("How high is the pyramid?\n");
	scanf("%i", &height);

	draw(height);
}


void draw(int h)
{
	//This prevents the recursion of happening forever
	if (h == 0)
	{
		return;
	}
	
	//This is an example of recursion where the function calls itself
	draw(h-1);

	//This will print the pyramid of hashes based on size selected
	for (int i = 0; i < h; i++)
	{
		printf("#");
	}
	printf("\n");
}