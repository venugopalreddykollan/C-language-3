 /* Check whether a number is even or not using goto */
 #include<stdio.h>
 #include<stdlib.h>
main()
{
    int n;
    printf("Enter a number:");
    scanf("\n%d",&n);
    if (n%2==0)
    goto even;
    else
    goto odd;
    even:printf("\n Even");
    exit(0);
    odd:printf("\n odd");
}