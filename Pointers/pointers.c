#include <stdio.h>

void point_function();

int main()
{
    point_function();

    /*
    printf("*ptr = %d\n", *ptr);
    printf("(*ptr+1) = %d\n", *ptr+1);
    printf("(*ptr-1) = %d\n",*ptr-1);
    */

}


void point_function()   {

    int var_x = 100;
    int var_y = 150;
    int var_z = 200;

    int * x = &var_x;
    int * y = &var_y;
    int * z = &var_z;

    int *ptr1 = &var_x;
    int *ptr2 = &var_y;
    int *ptr3 = &var_z;

    printf("%d\n", *ptr1);
    printf("%p\n", x);

    printf("%d\n", *ptr2);
    printf("%p\n", y);

    printf("%d\n", *ptr3);
    printf("%p\n", z);


    

}