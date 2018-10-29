#include <stdio.h>
#include <stdlib.h>

struct smarray
{
    int r,c,v;
};
int main()
{
    int i,r,c,t,pb=0;
    struct smarray *a,*b;
    int *rowstart,*rowsize;

    printf("\n enter r");
    scanf("%d",&r);
    printf("\n enter c");
    scanf("%d",&c);
    printf("\n enter t");
    scanf("%d",&t);
    a=(struct smarray*)malloc(t*sizeof(struct smarray));
    b=(struct smarray*)malloc(t*sizeof(struct smarray));
    rowstart=(int*)malloc(c*sizeof(int));
    rowsize=(int*)calloc(c,sizeof(int));
    printf("\n enter array elements");
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a[i].r,&a[i].c,&a[i].v);
    }
    for(i=0;i<t;i++)
    {
        rowsize[a[i].c]++;
    }
    rowstart[0]=0;
    for(i=1;i<c;i++)
    {
        rowstart[i]=rowsize[i-1]+rowstart[i-1];
    }
    for(i=0;i<t;i++)
    {
        pb=rowstart[a[i].c];
        b[pb].r=a[i].c;
        b[pb].c=a[i].r;
        b[pb].v=a[i].v;
        rowstart[a[i].c]++;
    }
    printf("\n after transpose");
    for(i=0;i<t;i++)
    {
        printf("\n %d %d %d",b[i].r,b[i].c,b[i].v);
    }

}
