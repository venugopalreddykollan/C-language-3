/* Print Lucky no */
#include<stdio.h>
main()
{
    int n,r,sum=0;
    printf("\n Enter a number:");
    scanf("\n%d",&n);
    test:
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(sum<10)
    printf("\n Lucky no:%d ",sum);
    else
    {
        n=sum;
        sum=0;
        goto test;
    }
}