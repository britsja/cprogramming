#include <stdio.h>

//Demonstrate the concept of passing by valaue and 
//passing by reference

//In arrays, using a value in the array will actually
//use the value and not reference it. 
//Compare this to the int being referenced below

void set_array(int array[4]);
void set_int(int x);

int main(void)
{
    int a = 10;
    int b[4] = {0, 1, 2, 3};
    set_int(a);
    set_array(b);
    printf("%d %d\n", a, b[0]);
}

//In arrays, the call for the 4th value uses the actual value of b[0] and changes it to 22
void set_array(int array[4])
{
    array[0] = 22;
}

//Here the reference to int a is changed in value from 10 to 22 but the initial int a is still 10
void set_int(int x)
{
    x = 22;
}
