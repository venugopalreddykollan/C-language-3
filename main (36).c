/* Break demo */
#include<stdio.h>
main()
{
    int i,n;
    printf("\n Enter a number to stop:");
    scanf("\n%d",&n);
    for(i=1;i<=20;i++)
    {
        printf("\n %d",i);
        if(i==n)
        break;
    }
    printf("\n Hello World");
}