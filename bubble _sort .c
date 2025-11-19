#include <stdio.h>
int main()
{
    printf("Please input 8numbers:");
    int a[8];
    for (int i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<8;i++)
    {
        for (int j=0;j<7;j++)
        {
            if (a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("after sorting:");
for (int i=0;i<8;i++)
{
  if (i!=7)  printf("%d ",a[i]);
    else printf("%d",a[i]);
}


    return 0;
}

