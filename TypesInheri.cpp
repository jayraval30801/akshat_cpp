#include<iostream>
using namespace std;
class A
{
    int p,q,r;
    public:
};
class B : public A
{
    int x,y,z;
    public:
    B(int x,int y,int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void Bprint()
    {
        cout<<"Value of x "<<x<<"Value of y"<<y<<"Value of z"<<z<<endl;
   }
};
int main()
{
    B obj(12,2,3);
    obj.Bprint();
}
/*
    Inheritance: 
            Types: 
                    1) Single
                    2) Multiple
                    3) Multilevel
                    4) Hierarchical
                    5) Hybrid
*/