
#include<stdio.h>

void main() {

    int arr[][3][3] = {{1,2,3,4,5,6,7,8,9},{10,20,30,40,50,60,70,80,90}};

    int row = 3;
    int col = 3;

    // for(int plane=0;plane<2;plane++) {
    //     for(int row=0;row<3;row++) {
    //         for(int col= 0;col<3;col++) {

    //             printf("%d ",arr[plane][row][col]);
    //         }

    //         printf("\n");
    //     }
    //     printf("\n");
    // }


    //Using two for loop

    int rowVal = -1;
    int colVal = -1;
    for(int plane=0;plane<2;plane++) {

        for(int i=0;i<row*col;i++) {

            rowVal = i/3;
            if(i%3==0) {
                colVal = 0;
                printf("\n");
            }
            printf("%d ",arr[plane][rowVal][colVal++]);
        }
    }
}