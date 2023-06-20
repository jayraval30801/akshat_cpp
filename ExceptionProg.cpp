#include<iostream>
using namespace std;
int main()
{
    int a,b,p;

    try
    {
    cout<<"Enter a";
    cin>>a;

    cout<<"Enter b";
    cin>>b;

    if(b==0)
    {
        throw "Error Not Divisible by 0";
    }
    else
    {
    p = a/b;
    cout<<"Value of p is "<<p;
    }
    }catch(const char *msg)//string *ptr = ptr[i];
    {
        cout<<msg;
    }
}
/*
Can not divide by 0 

    Multiple Catches => try => multiple catch 
*/