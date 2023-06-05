#include<iostream>
using namespace std;
class Customer
{   
    int accno;
    int password;
    public:
    void setAccno(int a)
    {
        accno = a;
    }
    int getAccno()
    {
        return accno;
    }
    void setPass(int  p)
    {
        password = p;
    } 
    int getPass()
    {
        return password;
    }
};
int main()
{
    Customer obj;
    obj.setAccno(123);
    cout<<"Accno is"<<obj.getAccno();
    obj.setPass(111);
    cout<<"Password is"<<obj.getPass();

}

/*
Encapsulation : 
        Wrapping of Data 
   Security  :  

        Getter Setter Methods 

        Class Private Data => Methods Public 

        
*/