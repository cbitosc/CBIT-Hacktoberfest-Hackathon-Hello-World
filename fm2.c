#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        char c='A';
        for(j=1;j<=7;j++)
        {
            if(j>8-i)
            {
                  printf("    ");
            continue;
            }
            printf("%c    ",c);
            c++;
        }
        rev(i);
        printf("\n\n");
    }
}
void rev(int i)
{
    int j;
    char p='G';
if(i>=2)
{
   i--;
   printf(" ");
}

    for(j=1;j<=6;j++)
    {

        if(j<i)
        {
            p--;
           printf("      ");
        continue;
        }
         p--;

        printf("%c    ",p);

    }
}
