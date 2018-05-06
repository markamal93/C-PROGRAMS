#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],b[10],c[10],i;
    //read the first array a
    printf("enter first array (10 elements)\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    //read the second array b
    printf("enter second array (10 elements)\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }
    //print array a before swapping
    printf("the first array is:\n");
    for (i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

    //print array b before swapping
    printf("\nthe second array is:");
    for (i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    //swapping
    for (i=0;i<10;i++)
    {
    c[i]=a[i];
    a[i]=b[i];
    b[i]=c[i];
    }
    //print array a after swapping
    printf("\nthe first array after swapping is:\n");
    for (i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    //print array b after swapping
    printf("\nthe second array after swapping is:\n");
    for (i=0;i<10;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}
