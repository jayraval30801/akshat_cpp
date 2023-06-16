#include<iostream>
using namespace std;
class Address
{
    public:
    string street;
    string city;
    string country;
    Address(string street,string city,string country)
    {
        this->city=city;
        this->country=country;
        this->street = street;
    }
};
class Company
{
    public:
    int eid;
    string name;
    string desi;
    Address *adr;
    Company(int eid,string name,string desi,Address *adr)
    {
            this->eid = eid;
            this->name=name;
            this->desi = desi;
            this->adr = adr;
    }
    void display()
    {
        cout<<"Employee Id is"<<eid<<endl;
        cout<<"Name "<<name<<endl;
        cout<<"Design "<<desi<<endl;
        cout<<"Street is"<<adr->street<<endl;
        cout<<"City is"<<adr->city<<endl;
        cout<<"Country is"<<adr->country<<endl;
    }
};
int main()
{
    Address a1("b1-104/sivaji chowk","mumbai","india");
    Company c(104,"Akshat","Developer",&a1);
    c.display();
}
/*
Aggregation : 
        Class Data another class Use : 

            Company : Data : EmployeeId , Name , Designation , Address
                                                                 (Street No , City , Country)        

Using Aggregation  : 

Date Class : int day , int month , int year , Time &time  
Time Class : int seconds , int minutes , int hours

    Using Check Date Valid or Invalid



*/