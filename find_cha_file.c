#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp= NULL;
char ch;
int count_cha=0, count_spaces=0, count_num=0, count_lines=0;

fp= fopen("source.txt","r");

		if (fp== NULL)
		{
		printf("error\n");
		exit(1);
		}

	while(ch!= EOF)
	{
	if (ch='\n')
	 count_lines++;

	if (ch=' ')
	 count_spaces++;

	if (ch>= 'a' && ch<= 'Z')
	 count_cha++;

	if (ch>= '1' && ch<= '9')
	 count_num++;
	}

printf("lines=%d\n",count_lines);
printf("characters=%d\n",count_lines);
printf("numbers=%d\n",count_lines);
printf("spaces=%d\n",count_lines);

fclose(fp);

return 0;
}
