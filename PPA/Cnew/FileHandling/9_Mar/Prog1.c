
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[50];
    FILE *fp;
    fp = fopen("myfile2.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Testing fputs() function: \n\n");
    printf("To stop reading press Ctrl+Z in windows and Ctrl+D in Linux :");

    while( fgets(str,49,stdin) != NULL )
    {
        fputs(str, fp);
    }

    fclose(fp);
    return 0;
}
	 
