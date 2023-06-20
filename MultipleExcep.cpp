#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3,45,66,6};
    int i,j,b;
    cout<<"Enter any index";
    cin>>i;
    try
    {
            if(i>=6)
            {
                throw "array index out of bound";
            }
            cout<<"Enter dominator";
            cin>>b;
            if(b==0)
            {
                throw 0;
            }   
            a[i] = a[i]/b;
            for(i=0;i<6;i++)
            {
                cout<<"\t"<<a[i];
            }
    }catch(const char *msg)
    {
            cout<<msg<<endl;
    }catch(int num)
    {
        cout<<"cannot divisible by "<<num<<endl;
    }
    catch(...)
    {
        cout<<"Unexpected Exception occur"<<endl;
    }
}