#include<iostream>
using namespace std;
template<class T,int x>
class A
{
    T p[100];
    int i;
    public:
    void insert()//method create
    {
            for(i=0;i<x;i++)
            {
                cout<<"Enter p["<<i<<"]";
                cin>>p[i];
            } 
   }
   void  display()
   {
        for(i=0;i<x;i++)
        {
            cout<<"\t"<<p[i];
        }
   }
};
int main()
{
    A<int,10> obj;
    obj.insert();
    obj.display();
}