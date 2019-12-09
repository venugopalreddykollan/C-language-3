/* Nested loops Demo:to print prime numbers from 1 to n*/
#include<stdio.h>
int main()
{
    int i,j,k,n,count=0;
    printf("\n Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=i,k=1;k<=j;k++)
        {
            if(j%k==0)
            count++;
        }
        if(count==2)
        printf("\n%d",j);
    }
}