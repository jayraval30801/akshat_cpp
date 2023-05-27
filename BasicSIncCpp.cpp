#include<iostream>
#include<stdio.h>
using namespace std;
struct Bank
{
        int accno;
        string name;
        void input()
        {

        }
        void display()
        {

        }
};
int main()
{
       struct Bank b; // Object 
       cout<<"Enter Accno";
       cin>>b.accno;
       fflush(stdin);
       cout<<"Enter Name";
       getline(cin,b.name);
       cout<<"Name is"<<b.name;
       cout<<"Account No is "<<b.accno;
       b.display();
       b.input();

}


/*

iostream header => cout/cin => 
cout<<  << insertion 
cin >> extraction 
   using namespace std;
        
            Oops : 
                Object : Instance 
                Class :  Attributes (Methods , Variable)
                Methods : Function Logic 


*/