#include<iostream>
using namespace std;
int main()
{

    int a[7],i,j;
    for(i=0;i<7;i++)
    {
        cout<<"Enter a["<<i<<"]";
        cin>>a[i];
    }
    //logic selection sort:
    for(i=0;i<7;i++)
    {
        int index = i;
        for(j=i+1;j<7;j++)
        {
                if(a[j]<a[index])
                {
                    index = j;
                }
        }
        int temp  = a[index];
        a[index]  = a[i];
        a[i] = temp;
    }
}
/*  index = 1 & j = 1
           i=0 j=1
    a[6] = {5,  3, 12,3,4,6,2,88};
      =>   
         = {2,3,12,3,4,6,5,88};
         = {2,3,3,12,4,6,5,88};






*/