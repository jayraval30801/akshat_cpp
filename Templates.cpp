#include<iostream>
using namespace std;
template<class T>T add(T x,T y)
{
    return x+y;
}
int main()
{
    cout<<add<int>(3,7)<<endl; // Call add Function 
    cout<<add<float>(5.66,8.99)<<endl;
    cout<<add<char>('A',32)<<endl;
}
/*

template : 
        Generic Class or Method




        void add(int a,int b)

*/