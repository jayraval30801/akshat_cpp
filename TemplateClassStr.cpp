#include<iostream>
using namespace std;
template<class T> // Declaration of template class
class A
{
    public:
    T num1,num2;
    void add()
    {
        cout<<"Enter Num1 ";
        cin>>num1;
        cout<<"Enter num2";
        cin>>num2;
        cout<<"Addition of Num1 and Num2 "<<num1+num2;
    }    
};
int main()
{
    A<int> obj;
    obj.add();
    A<float> obj2;
    obj2.add();
}