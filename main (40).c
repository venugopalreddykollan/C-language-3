/* Print Lucky no */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    int pid,qty,count=0;
    char pname[20],ch='y';
    float amount,tamount=0,price;
    while(ch=='y' || ch=='Y')
    {
        printf("enter  product id:");
        scanf("%d",&pid);
        printf("enter  product name:");
        scanf("%s",pname);
        printf("enter  product price:");
        scanf("%f",&price);
        printf("enter  product quantity:");
        scanf("%d",&qty);
        amount=qty*price;
        tamount=amount;
        count++;
        
        printf("\n Do you wish to continue?(y/n):");
       // ch=getch();
        fflush(stdin);
        scanf("%c",&ch);
      
        
    }
      printf("\n No.of Items Purchased:%d",count);
        printf("\n Total Amount:%f",tamount);
        
        return(0);
}