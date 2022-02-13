
// There are two planes in the 3D array , compare both the plane if element in plane 0 is present in plane 1 then increment both the element in plane 0 and plane 1 by 1

#include <stdio.h>

void main()
{

    int arr[2][3][3] = {{1, 2, 3, 4, 5, 6, 7, 8, 9}, {10, 3, 30, 40, 50, 60, 70, 80, 90}};
    int arr1[9];
    int ind = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    int fpRow = -1;
    int fpCol = -1;

    int spRow = -1;
    int spCol = -1;
    int flag = 0;

    for (int i = 0; i < 9; i++)
    {

        fpRow = i / 3;
        if (i % 3 == 0)
            fpCol = 0;

        flag = 0;
        for (int j = 0; j < 9; j++)
        {

            spRow = j / 3;
            if (j % 3 == 0)
                spCol = 0;

            if (arr[0][fpRow][fpCol] == arr[1][spRow][spCol])
            {

                // int pre = 0;
                // for (int k = 0; k < ind; k++)
                // {
                //     if (arr1[k] == arr[0][fpRow][fpCol])
                //         pre = 1;

                // }
                // if (pre == 0)
                // {
                //     arr[1][spRow][spCol++] += 1;
                //     flag = 1;
                // }

                arr[1][spRow][spCol++] += 1;
                flag = 1;

            }
        }

        fpCol++;
        if (flag == 1)
        {
            arr[0][fpRow][fpCol++] += 1;
            arr1[ind++] = arr[0][fpRow][fpCol] + 1;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
