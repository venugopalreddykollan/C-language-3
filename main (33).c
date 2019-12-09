/* Check whether a number is perfect or not */
#include<stdio.h>
main()
{
    int i,n,sum;
    printf("\n Enter a number:");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if (sum==n)
    printf("perfect number");
    else
    printf("not a perfect number");
}