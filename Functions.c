#include <stdio.h>

// Standard format
// Place the functions above main
// Unlike Arduino, you cannot put below main.

//Globals:

int addition(n1,n2)
{
    int r1 = n1 + n2;
    return r1;
}

int product(n3,n4)
{
    int r2 = n3 * n4;
    return r2;
} // A function prototype gives information to the compiler that the function may later be used in the program.

int deduct(n2,n3)
{
    int r3 = n2 - n3;
    return r3;
}

int divide (n1,n4)
{
    int r4 = n4 / n1;
    return r4;
}


int main()  {

    int n1 = 5;
    int n2 = 10;
    int n3 = 15;
    int n4 = 20;
    
    int r1 = addition(n1,n2);
    int r2 = product(n3,n4);
    int r3 = deduct(n2,n3);
    int r4 = divide(n4,n1);  // Running this function will return an error

    printf("1st Function Result: %d\n", r1);
    printf("2nd Function Result: %d\n", r2);
    printf("3rd Function Result: %d\n", r3);
    printf("4th Function Result: %d\n", r4);

    return r1,r2,r3,r4;

}

