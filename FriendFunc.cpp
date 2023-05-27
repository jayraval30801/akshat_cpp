#include<iostream>
using namespace std;
class Baba
{
        int photos;
    protected:
        int family;
    private:
        Baba()
        {
            photos=69;
            family=12;
        }
        //friend function declaration
        friend void PrivateData();
        private:
        void display()
        {
            cout<<"Display Method of Baba class";
        }
};
// Defination
void PrivateData()
{
        Baba obj;
        cout<<"Baba Is Having "<<obj.photos<<"Photos"<<endl;
        cout<<"Baba have"<<obj.family<<"Family Members"<<endl;
        obj.display();
}   
int main()
{
    PrivateData();
}
//  Task : 
//  Class Parent => private data => Property Count , Balance 
// Class Child => private data => childBalance 
//  using Friend Functions in Child and Parent Display Data of Both Classes
