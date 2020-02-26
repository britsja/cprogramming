#include <stdio.h>
#include <stdbool.h>

//Get three inputs as the lengths of each side of triangle and calculate if they are 
//legit values for a triangle. Indicate which value is the hypotenuse
//This only checks for valid whole numbers, not decimal values. Can change this to floats

int valid_triangle(int a, int b, int c);

int main(void)
{
    int side1, side2, side3;

    printf("This will calculate if the lengths of the sides of the triangle is valid and which value is the hypotenuse\n");
    
    printf("Enter the value of the first side of the triangle: ");
    scanf("%i", &side1);
    printf("Enter the value of the second side: ");
    scanf("%i", &side2);
    printf("Enter the length of the last side: ");
    scanf("%i", &side3);

    bool result = valid_triangle(side1, side2, side3);

    if (result)
    {
        printf("The values are correct for a triangle\n");
    }
    else
    {
        printf("False: Incorrect values for a triangle\n");
    }

}

int valid_triangle(int a, int b, int c)
{
    //Check if a is the hypotenuse
    if (a > b && a > c)
    {
        printf("The first value, %i, is the hypotenuse\n", a);

        if (a * a == (b * b) + (c * c))
        {
            return 1;
        }    
    }
    //Check if b is the hypotenuse
    else if (b > a && b > c)
    {
        printf("The second value, %i, is the hypotenuse\n", b);

        if (b * b == (a * a) + (c * c))
        {
            return 1;
        }
    }
    //Check if c is the hypotenuse
    else if (c > a && c > b)
    {
        printf("The third value, %i, is the hypotenuse\n", c);

        if (c * c == (a * a) + (b * b))
        {
            return 1;
        }
    }
    //check if sides are of equal length
    else if ( a == b && a == c)
    {
        printf("This triangle has equal length sides");
        return 1;
    }
    //Not a valid triangle
    else
    {
        return 0;
    }

}