#include <stdio.h>
// Display all prime numbers between 2 numbers

int initFirstNum();
int initSecondNum();
int comparator();

int main()  {

    int n1 = initFirstNum();
    int n2 = initSecondNum();
    int data[2] = comparator(n1,n2);
    int diff = data[0];
    int bound = data[1];

    findNumbers(diff,bound);

    

    


    printf("%d\n",n1);
    printf("%d\n",n2);

    //int n3 = comparator(n1,n2);

}

int initFirstNum() {

    int n1;
    printf("First Number: ");
    scanf("%d",&n1);
   
    printf("n1 = %d",n1);
    printf("\n");

    return n1;
}

int initSecondNum() {

    int n2;
    printf("Second Number: ");
    scanf("%d",&n2);
    
    printf("n2 = %d",n2);
    printf("\n");

    return n2;


}

int comparator(n1,n2){

    int n3; //Difference
    int n4; //Lower bound

    if (n1>n2){
        n3 = n1 - n2;
        n2 = n1;
    }

    else if (n2>n1){
        n3 = n2 - n1;
        n4 = n1;
    }

    else if (n1==n2)
    {
        n3 = 0;
        n4 = n1;
    }

    int data[2] = {n3,n4};

    printf("Difference: %d\n",n3);
    return data;
    
}

int findNumbers(diff, bound)   
{
    int diff;
    int bound;

    for (int i = bound, i < bound + diff, i++)
    {
        if (i % 2 != 0) {
            printf("%d\n",i);
        }

    }

}
