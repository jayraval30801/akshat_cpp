#include<iostream>
using namespace std;
class App
{
    public:
    App();
    App(int a,int b)
    {
        cout<<"Enter a";
        cin>>a;
        cout<<"Enter b";
        cin>>b;
        int c = a+b;
        cout<<"Addition is "<<c;
    }
    App(int a)
    {
        cout<<"1 Arg para";
    }
    App(string a)
    {
        cout<<"1 arg para";
    }
};
App::App()
{
    cout<<"Default constructor";
}
int main()
{
    App obj(12);
}


/*

    Constructor : 
            Method Name and Class Name Same 
            Class Using Object Create => Consturctor By Default Call 
            return Type not possible 

                3 types  : 
                        1) Default constructor : 
                                No Parameters in Constructor
                        2) Parameterized Constructor : 
                                Parameters in Constuctor
                        3) Copy Constructor : 
                                Call refrence in Constructor 
            Constructor Overloading : 
                        Object 
                            => Compiletime => Which Constructor To Call

    1) Area => Class => Rectangle Area ,
      Circle Area , 
      Triengle area ,
      Square Area


*/