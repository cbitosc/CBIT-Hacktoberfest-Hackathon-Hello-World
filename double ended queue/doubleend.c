#include<stdio.h>
#include<stdlib.h>
int i,n,r=-1,f=0;
void insert(int *);
void delete(int *);
void display(int *);
int main()
{
 int *a,o;
 printf("\ndouble ended queue");

 printf("\nenter the size of array");
 scanf("%d",&n);

 a=(int*)calloc(n,sizeof(int));

 printf("\nselect your choice\n");
 int f=1;
  while(f==1)
   {
   printf("1)insert\n");
   printf("2)delete\n");
   printf("3)exit");
   scanf("%d",&o);
     switch(o)
     {
       case 1:{
              insert(a);
              break;
              }
       case 2:{
               delete(a);
               break;
              }
       case 3:{
              f=0;    
               }
       
     }//switch
   }//while
}//main
     
void insert(int *a)
 {
  int o;
  printf("where you want to insert");
  printf("1)starting");
  printf("2)end");
  scanf("%d",&o);
  switch(o)
    {
     case 2:{
             printf("enter the element");
             scanf("%d",&a[++r]);
             }
      case 1:{
              if(r==n-1)
              {  
              printf("overflow");
              }
            else
            { 
             printf("enter the element");
              for(i=r;i>=0;i--)
              {
               a[i+1]=a[i];
              }
             scanf("%d",&a[0]);
            }
           }
     }
  }

void delete(int *a)
 {
  int o;
  printf("where you want to delete");
  printf("1)starting");
  printf("2)end");
  scanf("%d",&o);
  switch(o)
    {
     case 2:{
             r--;
             }
      case 1:{
              if(r==0)
              {  
              printf("underflow");
              }
            else
            { 
             for(i=0;i<=r;i++)
              {
               a[i]=a[i+1];
              } 
              
            }}
     }
  }
     
void display(int *a)
 { 
  for(i=f;i<=r;i++)
   {
    printf("%d",a[i]);
   }
 }
              
             
