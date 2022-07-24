#include <stdio.h>

int main()       //dataType arrayName[arraySize]
{
    int n1 = 5;
    int n2 = 10;
    int n3 = 15;
    int n4 = 20;
    int n5 = 25;

    int data[5] = {n1,n2,n3,n4,n5};

    data[0] = n1;
    data[1] = n2;
    data[2] = n3;
    data[3] = n4;
    data[4] = n5;

    printf("%d" , data[0]);
    printf("\n");
    printf("%d" , data[1]);
    printf("\n");
    printf("%d" , data[2]);
    printf("\n");
    printf("%d" , data[3]);
    printf("\n");
    printf("%d" , data[4]);
    printf("\n");

    return 0;

}