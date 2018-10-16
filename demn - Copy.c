#include<stdio.h>
void main()
{
   int i=1,a[6],n;
    printf("enter sum\n");
    scanf("%d",&n);
     switch(i)
{
    case 1:{
      a[1]=   n/100;
      n=n%100;
                   }

    case 2:{
        a[2]=   n/50;
        n=n%50;
                   }

    case 3:{
         a[3]=   n/10;
         n=n%10;
                   }

    case 4:{
         a[4]=   n/5;
         n=n%5;
                   }

    case 5:{
         a[5]=   n/2;
         n=n%2;
                   }

    case 6:{
         a[6]=   n/1;

                   }
}

   printf("hundreds=%d\n",a[1]);
   printf("fifties=%d\n",a[2]);
   printf("tens=%d\n",a[3]);
   printf("fives=%d\n",a[4]);
   printf("twos=%d\n",a[5]);
   printf("ones=%d\n",a[6]);
}

