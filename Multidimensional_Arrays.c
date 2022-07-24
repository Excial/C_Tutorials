#include <stdio.h>

int rowChange();
void rowScan();

int main()
{
    /*
    int array1[3][1];

    array1[0][0] = 5;
    array1[1][0] = 5;
    array1[2][0] = 2;

    
    or
    int array1[3][1] = {5,5,2}
    

    int n1 = rowChange(array1[2][0]);

    //printf("%d\n",n1);
    */

    rowScan();
    return 0;
}

int rowChange(n0)
{
    n0 += 5;
    //printf("New value: %d\n",n0);
    return n0;
}

void rowScan()
{
    // 3dArray[Table][Row][Column];
    int array1[3][3] = {{0,0,0},{1,1,1},{2,2,2,}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        int n1 = array1[i][j] + 100;
        printf("New Value row %d, ", i);
        printf("New Value column %d: ", j);
        printf("%d\n",n1);
        }
    }

}