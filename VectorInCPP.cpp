#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> g1; // Object 
    for(i=1;i<=10;i++)
    {
        g1.push_back(i);
    }
    cout<<"Output of Data";
    for(auto i=g1.begin();i != g1.end(); i++)
    {
        cout<<*i; // C lang => *ptr 
    }
    cout<<"R begin";
    for(auto i=g1.rbegin();i!=g1.rend();i++)
    {
        cout<<*i;
    }
    cout<<"Size of Vector";
    cout<<g1.size()<<endl;
    cout<<"Vector is"<<g1.empty()<<endl;
    cout<<"Capacity"<<g1.capacity()<<endl;
    cout<<"Maximum Size of Vector is"<<g1.max_size()<<endl;
    cout<<"\n at : g1.at(4) = "<<g1.at(4); 
    cout<<"\n Front()  : g1.front() = "<<g1.front();
    cout<<"\n Back() : g1.back() = "<<g1.back(); 
}
