#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp_s, *fp_d;
    char ch;
    

        /*fp_s= fopen("source.txt","w");
        printf("enter the string, to store in the source file\n");
        scanf("%s",str);

        if (fp_s==NULL)
        {
           printf("Unable to open the file");
           exit(1);
        }

        fputs(str,fp_s);
        fclose(fp_s);*/

        fp_s= fopen("source.txt","r");
        fp_d= fopen("destination.txt","w");

		if (fp_s==NULL)
		{
		   printf("Unable to open the source file");
		   exit(1);
		}

		if (fp_d==NULL)
		{
		   printf("Unable to open the destination file");
		   exit(1);
		}

       for(ch=fgetc(fp_s); ch!= EOF; ch=fgetc(fp_s))
          fputc(ch,fp_d);

    fclose(fp_s);
    fclose(fp_d);
            
    printf("succesfully copied to the destination file\n");

    return 0;

}
