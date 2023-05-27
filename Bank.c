#include<stdio.h>
struct Bank
{
    int balance;
    char name[30];
};
struct Bank input(struct Bank);
void showdata();
int  deposit(struct Bank);
int main()
{
    int choice,l;
    struct Bank b;
    b = input(b);
    showdata(b);
    printf("Enter 1 for widthdraw");
    printf("\nEnter 2 for Deposit");
    printf("\nEnter 3 for Check Balance");
    printf("\nEnter 4 for Exit");
    scanf("%d",&choice);
    switch(choice)
    {
            case 2:
                l = deposit(b);
                printf("\nYour New Balance is %d",l);
                break;
            default : 
                printf("Invalid Choice");
    }
}
void showdata(struct Bank b)
{
    printf("Your Bank Balance is  %d \n ",b.balance);
    printf("Your Name is : %s",b.name);
}
struct Bank input(struct Bank b)
{
    printf("Enter Balance");
    scanf("%d",&b.balance);
    fflush(stdin);
    printf("Enter Name");
    gets(b.name);
    return b;
}
int deposit(struct Bank b)
{
    int amt;
    printf("Enter how much your want to deposit");
    scanf("%d",&amt);
    b.balance = b.balance + amt;
    return b.balance;
}

