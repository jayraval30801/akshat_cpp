#include<iostream>
using namespace std;
class Bottle
{
    public:
    int price=20;
    Bottle()
    {
        cout<<"Bottle Constructor Called";
    }
    ~Bottle()
    {
        cout<<"Bottle Destructor Called";
    }
    Bottle(int a,int b)
    {}
    void display()
    {
        cout<<"Display Method";
    } 
};
class Fenta : public Bottle  // Syntax of inheritance
{
    public:
    Fenta()
    {
        Bottle(12,2);
        cout<<"Fenta COns Called";
    }
    // Fenta(int a,int b)
    // {
    // }
};
int main()
{
    Fenta obj;
    obj.display();
    obj.price=12;
    cout<<"Price of Fenta is"<<obj.price;
}


/*
Inheritence: 
            Code reusability 

                    => Base class/Parent class/ Super class :
                            Methods and Constructor and Variables 
                    => Child class/Sub class/Derived class : 
                            Can access that properties
            => Inheritence : 
                    Class => Object Child class 
            
                Symbol : (:) inherits
            Types : 
                    1) Single inheritance : Only one parent and only one child
                    2) Multiple inheritance : More than one parent and only one child
                    3) Multilevel inheritance : Grand parent => parent => Child class
                    4) Hierarchical inheritance : one parent => more than one child
                    5) Hybrid inheritance : Combination of inhe types
            Access Specifier : 
                    public 
                    private 
                    protected             

        Continue....

Destructor : 
        ~ => tild symbol 
        Arguments not possible => Always last Call
            Memory Deallocates 

    Sequence : 
            1) Constructor
            2) Methods
            3) Destructor 



*/