#include<stdio.h>
main()
{
    int a[50],i,n,sum=0;
    printf("enter the value of n:");

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    sum+=a[i];
    printf("sum=%d",sum);
}
