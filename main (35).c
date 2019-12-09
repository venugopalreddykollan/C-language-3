/* Check whether a number is prime or not */
#include<stdio.h>
main()
{
    int i,n,count;
    printf("\n Enter a number:");
    scanf("%d",&n);
    count=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
       count++;
    }
    if (count==1)
    printf("prime number");
    else
    printf("not a prime number");
}