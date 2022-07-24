#include <stdio.h>
int main()
{
    float num1;
    double num2;
    int num3;

    printf("Enter a float: ");
    scanf("%f", &num1);

    printf("\n");
    printf("Enter a double: ");
    scanf("%lf", &num2);

    printf("\n");
    printf("Enter an Int: ");
    scanf("%d", &num3);

    printf("\n");
    printf("Num1 = %f", num1);
    printf("\n");
    printf("Num2 = %lf", num2);
    printf("\n");
    printf("Num3 = %d", num3);
    printf("\n");

    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);     
    printf("You entered %c.", chr);  

    return 1;
}