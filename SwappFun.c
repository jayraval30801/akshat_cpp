#include<stdio.h>
#include<conio.h>
int swap(int,int);
int main()
{
    int a,b;
    printf("\nEnter a");
    scanf("%d",&a);
    printf("\nEnter b");
    scanf("%d",&b);
    swap(a,b); //
    return 0;
}
int swap(int p,int q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
    printf("\nValue of p is : %d",p);
    printf("\nValue of q is : %d",q);
    return 0;
}