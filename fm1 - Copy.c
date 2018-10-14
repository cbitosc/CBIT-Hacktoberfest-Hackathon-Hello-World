#include<stdio.h>
int main()
{
    int i,ct,n=1,j;
   for(i=1;i<=4;i++)
   {
       ct=0;
       for(j=i;j<=3;j++)
       {
           printf("\t");
       }
       while(ct!=i)
      {
          ct++;

          printf("\t\t%d",n);
          n++;
      }
       printf("\n");
       printf("\n");
   }
    return 0;
}

