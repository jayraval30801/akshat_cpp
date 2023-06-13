#include<iostream>
using namespace std;
int main()
{
    int a[8],i;
    for(i=0;i<8;i++)
    {
        cout<<"Enter a["<<i<<"]";
        cin>>a[i]; // Array => Element => a[i] / index : i
    }
    cout<<"Your Elements Are"<<endl;
    for(i=0;i<8;i++)
    {
        cout<<a[i]<<"\t";
    }
}
/*
Bubble Sort : 
pass 1: 
    {11,2,2,7,8,63,3,3}
    {2,11,2,7,8,63,3,3}
    {2,2,11,7,8,63,3,3}
    {2,2,7,11,8,63,3,3}
    ....
    {2,2,7,8,3,3,11,63}
  pass 2: 
    {}  
    pass 3: 
       ...

    Last : Sorted Array 
     
    

Insertion  Sort
Selection Sort
Merge Sort
Quick Sort

Searching : 
Binery Search
Linear Search
Sequencial Search 


*/
// Similiar Data type data store multiple data 
// Array   : User define Data type : 
//  int a[] = {12,2,344,4};
// float b[] = {3,5.5, 8.77};
// char c[] = {'a','b','c'};
// string d[] = {"abc","def","ghi"};
// Array : Unordered , Same Elements 
// index : 0 to n-1 => size n 
// Initally : Size Mension Necessary
// int a[9] = {2,3,3,4,5,6,66,5,43,323,97,653}; 
