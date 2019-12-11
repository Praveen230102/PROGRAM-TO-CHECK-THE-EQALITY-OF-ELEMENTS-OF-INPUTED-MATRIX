#include<stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int i, j;

    //entering the elements of first array
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("enter the elements of first array:");
            scanf("%d", &a[i][j]);
        }
    }

    //entering the elements of second array
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("enter the elements of second array:");
            scanf("%d", &b[i][j]);
        }
    }
    //comparing them

    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            if (a[i][j] == b[i][j])
            {
                printf("elements of array are same :\n ");
            }
            else
            {
                printf("elements of array are different:\n");
            }
        }

    }

}
