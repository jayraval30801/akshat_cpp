#include<iostream>
using namespace std;
class Bank
{
    int accno;
    string name;
    long balance;
    public:
    void input()
    {
        cout<<"Enter Account Number";
        cin>>accno;
        fflush(stdin);
        cout<<"Enter Name";
        getline(cin,name);
        cout<<"Enter Balance";
        cin>>balance;
    }
    void showAcc()
    {
        cout<<"\t"<<accno;
        cout<<"\t\t"<<name;
        cout<<"\t\t"<<balance<<"\n";
    }
    int search(int); // Declaration 
};
int Bank::search(int a) // defination Of Method
{
        if(a == accno)
        {
            showAcc();
            return 1;     
        } 
        return 0;        
}
int main()
{
        Bank obj[100]; // Declration of Object
        int choice,i,number,acno,found;
        cout<<"Enter How many Customer you want to Enter";
        cin>>number;
        for(i=0;i<number;i++)
        {
            obj[i].input();
        }
        cout<<"Enter 1 for Check Balance";
        cout<<"\nEnter 2 for Display All Data";
        cout<<"\nEnter 3 for Deposit";
        cout<<"\nEnter 4 for Withdraw";
        cin>>choice;
        switch(choice)
        {
                case 1: 
                      cout<<"Enter Account Number Of Person You want to check Balance";
                      cin>>acno; 
                      for(i=0;i<number;i++)
                      {
                       found = obj[i].search(acno);
                      }  
                      if(!found) // !0 = 1
                      {
                        cout<<"Account Number Not Found";
                      }
                      break;
                   case 2 :
                        cout<<"Account Number \t Name \t Balance\n";
                        for(i=0;i<number;i++)
                        {
                            obj[i].showAcc();
                        }
                        break;
        }
}

/*
    Structure : Methods Variable => By default Public
     Class : By default Data => private    
    3 Access Specifier : 
                    1) Public : if Any Variable or Method Accessible outside that class 
                    2) Private : Only within class accessible (By default in Class)
                    3) Protected :  Child class & Friend Class can Access 



*/