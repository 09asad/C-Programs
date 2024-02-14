#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr1, *fptr2;
    char c;
    fptr1 = fopen("file1.txt","r");
    if(fptr1 == NULL)
    {
        printf("Cannot open the file");
        exit(0);
    }
    fptr2 = fopen("file2.txt","w");
    if(fptr2 == NULL)
    {
        printf("Cannot open the file");
        exit(0);
    }
    while(1)
    {
        c = fgetc(fptr1);
        if(c == EOF)
        break;
        fputc(c,fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
}