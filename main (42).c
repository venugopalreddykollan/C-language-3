/* 1 tp 20 even tables*/
#include<stdio.h>
int main()
{
    int a,b;
    for(a=1;a<=10;a++)
    {
        if(a%2==0)
        {
        for(b=1;b<=20;b++)
        {
            printf("\n %d X %d=%d",a,b,a*b);
        }
        }
        printf("\n\n");
    }
}