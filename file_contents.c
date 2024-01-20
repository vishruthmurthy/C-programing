#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    int count;
    
    fp1= fopen("vish.txt", "r");
    if(fp1==NULL)
    {
        printf("file not opening\n");
        exit(1);
    }

    fp2= fopen("destination.txt", "w");
    if(fp2==NULL)
    {
        printf("file not opening\n");
        exit(1);
    }

    ch= getc(fp1);

    while(ch!= EOF)
    {
        fputc(ch,fp2);
        ch=getc(fp1);
    }

    printf("contents copied");

    fclose(fp1);
    fclose(fp2);
}
