#include <stdio.h>
#include <stdlib.h>

int main()
{
FILE *fp=NULL;
char ch;
int count=0;

        fp= fopen("source.txt","r");

	if (fp==NULL)
	{
		printf("error\n");
		exit(1);
	}

	for (ch=fgetc(fp); ch!= EOF; ch=fgetc(fp))
        {
            if(ch=='\n')
		count++;
        }
printf("%d\n\n", count);

fclose(fp);

return 0;

}
