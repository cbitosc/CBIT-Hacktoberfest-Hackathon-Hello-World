#include<stdio.h>
#include<stdlib.h>
int main()
 {
  int *a,temp,count=0,i;
  
  a=(int*)malloc(sizeof(int)*10);
   for(i=0;i<10;i++)
   {
    a[i]=-1;
   }
  while(count!=10)
   {
    printf("\n enter the element you want to insert");
    scanf("\n%d",&temp);
    i=temp%10;
    if(a[i]==-1)
    {
    a[i]=temp;
    count++;
    }
    else 
    {
     while(a[i]!=-1)
      {
       i=++i%10;
      }
     a[i]=temp;
     count++;
    }
   }
  if(count==10)
   {
    printf("\n stack overflow\n");
   }
   
  for(i=0;i<10;i++)
   {
    printf("\n%d",a[i]);
   }
  }
 
