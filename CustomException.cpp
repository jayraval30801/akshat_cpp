#include<iostream>
using namespace std;
class A : public exception
{
    public:
    A()
    {
        cout<<"Age is less than 18 ";
    }   
 
};
int main()
{
    int age;
    cout<<"Enter age ";
    cin>>age;
    try
    {
    if(age>18)
    {
        cout<<"You are good to go for voting";
    }
    else
    {
        throw A();
    }
    }catch(A obj)
    {
       
    }
}
/*
throw keyword used
    Custom Exception :
            class Method
            contructor Call    


*/