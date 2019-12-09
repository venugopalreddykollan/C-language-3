/* 19 tp 1 odd tables*/
#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=10;a++)
    {
        if(a%2==1)
        {
        for(b=19;b>=1;b--)
        {
            printf("\n %d X %d=%d",a,b,a*b);
        }
        }
        printf("\n\n");
    }
}