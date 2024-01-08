#include <stdio.h>

int main()
{

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    printf("%d", matrix[0][2]); // 2 ni chiqaradi

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    matrix[0][0] = 9;

    printf("%d", matrix[0][0]); // Endi 1 o'rniga 9 ni chiqaradi

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }
}
