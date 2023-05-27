#include<iostream>
using namespace std;
class Engineer
{
    int enrolno;
    string name;
    public:    
    Engineer(int e,string n)
    {
        enrolno = e;
        name = n;
    }
    Engineer(Engineer &e1)
    {
            enrolno = e1.enrolno;
            name = e1.name;
    }    
    void display()
    {
        cout<<"Name is"<<name;
        cout<<"Enrollment no is"<<enrolno;
    }
};
int main()
{
        Engineer obj(1,"Akshat");
        Engineer obj2(obj); // Copy Constructor
        obj2.display();

}