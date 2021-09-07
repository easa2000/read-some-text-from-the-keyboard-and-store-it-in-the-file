// program to read some text from the keyboard and store it in the file
#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char str[100];
    if((fp = fopen("file_ex8.txt","w")) == 0)
    {
        printf("\n Error opening the file");
        exit(1);
    }
    printf("\n Enter the text: ");
    gets(str);
    fflush(stdin);
    fprintf(fp, "%s",str);
    fclose(fp);
}
