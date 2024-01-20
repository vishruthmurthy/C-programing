#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    int count=1;

    //printf("enter the string to be printed on the screen\n");
    //gets(str);

    fp= fopen("vish.txt","r");
     
    if (fp==NULL)
    {
        printf("file not opening\n");
        exit(1);
    }

    ch= getc(fp);

    //for(ch=getc(fp); ch!= EOF;ch= getc(fp))

    while(ch!= EOF)
    {
        if(ch=='\n')
        {
            count++;
            //ch= getc(fp);
        }
    ch= getc(fp);
    }

    printf ("%d\n",count);

    fclose(fp);
}
