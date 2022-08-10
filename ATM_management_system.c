
#include<stdio.h>
#include<stdlib.h>

void list();
void deposit();
void withdraw ();
void transfer();
void balance();

int  totalamount=1000,amount,amo,tr,totaldeposit=0,totalwith=0,totaltr=0,acc,choice,anotherchoice;


int main()
{
   printf("\n enter your account number:");
   scanf("%d",&acc);
while(1)
   list();
   return 0;

}

//Function to display available options/
 void list()
{
    printf("\n 1 deposit amount");
    printf("\n 2 withdraw amount");
    printf("\n 3 transfer amount");
    printf("\n 4 balance");
    printf("\n 5 exit");
    printf("\n enter your choice:");
    scanf("%d",&choice);

switch(choice)
{
case 1:
    deposit();
    break;
case 2:
    withdraw();
    break;
case 3:
    transfer();
    break;
case 4:
    balance();
    break;
case 5:
    exit(0);
    break;
default :
    printf("\n invalid choice");
}
}

void deposit()
{
    printf("\n enter the amount that you have to deposit");
    scanf("%d",&amount);
    totaldeposit+=amount;
    printf("\n The deposited Amount is:%d",totaldeposit);

}
void withdraw()
{
    printf("\n Enter the amount that you wish to withdraw:");
    scanf("%d",&amo);
    totalamount-=amo;
    if(amo<=totalamount)
    {
        printf("The withdraw amount is:%d",amo);

    }
    else
    {
        printf("\n less amount withdraw is not possible");

    }

}

void transfer()
{
    printf("\n enter the amount you want to transfer");
    scanf("%d",&tr);
    totalamount-=tr;
    if (tr<=totalamount)
    {
        printf("The amount transferred is:%d",tr);

    }
    else
    {
        printf("\n less amount transfer is not possible");
    }
}

void balance()
{
    float balance;
    balance=totalamount;
    printf("\nYour Balance is Rs:%.2f \n",balance);

}
