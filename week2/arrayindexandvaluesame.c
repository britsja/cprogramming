#include <stdio.h>

//Exercise: create an array of int where the int value is the same value as the index
int main(void)
{
    int value = 100;
    int valueslist[value];

    for (int i = 0; i < value; i++)
    {
        valueslist[i] = i;
        printf("%i\t", valueslist[i]);
    }

    printf("\nAnd that is your result\n");

    return(0);

}

