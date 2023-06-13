#include<iostream>
using namespace std;
int main()
{

        int i,j,a[7],temp;
        for(i=0;i<7;i++)
        {
            cout<<"Enter a["<<i<<"]";
            cin>>a[i];
        }
        for(i=0;i<7;i++)
        {
                for(j=i+1;j<7;j++)
                {
                    if(a[i]>a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
        }
        cout<<"Sorted array is: ";
        for(i=0;i<7;i++)
        {
            cout<<"\t"<<a[i];
        }
}