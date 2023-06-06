#include<iostream>
using namespace std;
template<class T1,class T2>
class A
{
    T1 p;
    T2 q;
    public:
    A(T1 x,T2 y)
    {
            p = x;
            q = y;
    }
    void display()
    {
        cout<<"Addition is "<<p+q<<endl;
    }
};
int main()
{
    A<int,float> obj(2,33.6);
    obj.display();
}
/*
    Task : 
            A<int,10> obj;
            obj.insert();
            obj.display();

*/