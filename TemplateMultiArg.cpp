#include<iostream>
using namespace std;
template<class X,class Y>void compare(X a,Y b)
{
    if(a==b)
    {
        cout<<"Both are Same";
    }
    else
    {
        cout<<"Both are diff";
    }
} 
int main()
{
    compare(1.22,1);
}