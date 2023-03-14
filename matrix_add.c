#include <stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("Enter the first matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the number: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the number: ");
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
}
