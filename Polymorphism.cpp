#include<iostream>
using namespace std;
class Parent // Overriding
{
    public:
    virtual void Property()
    {
        cout<<"Parent class Property";
    }
};
class Child : public Parent
{
    public:
    void Property()
    {
        cout<<"Child class Property";
    }
};
int main()
{
        Parent *obj;
        Child obj2;
        obj=&obj2;
        obj->Property();
}

// class Shape  OverLoading 
// {
//     public:
//     void area()
//     {

//     }
//     void area(int a,int b)
//     {

//     }
//     void area(float a)
//     {

//     }
//     void area(int a)
//     {

//     }
// };
// int main()
// {   

// }


/*
    Two Types : 
            1) Compile Time : 
                        Overloading 
                            => Compile Time Method to call
            Only one class 
                    => Same Name but different Arg Methods
            2) Run Time : 
                        Overriding      
                            => Run Time Method to call   
            inheritence 
                Child class Parent class 
                        => Same Name With same Arg 

*/