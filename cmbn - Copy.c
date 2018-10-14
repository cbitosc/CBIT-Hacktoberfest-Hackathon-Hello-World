#include<stdio.h>
void main()
{
    int i,ct,n,k,x;
    for(n=1;n<=3;n++)
  {
      ct=1;
  for(i=0;ct<=3;i=(i+1)%3,ct++)
  {
      k=i+1;
       if(n==3&&ct==3)
     {
       k=1;
     }
     if(k==n&&ct<3)
     {
         //printf("hdhbc")
      continue;
     }

     if(k!=n&&ct<3)
     {
        x=k;
       continue;
     }
     if(ct==3)
     {
          printf("%d",n);
          printf("%d",x);
         printf("%d\n",k);
          printf("%d",n);
          printf("%d",k);
         printf("%d\n",x);
     }
  }
}
}
