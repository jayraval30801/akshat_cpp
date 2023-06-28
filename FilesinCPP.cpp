#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b,c;
    string text;
    ofstream myFile;
    ifstream myReadFile;
    myFile.open("Aks.txt");
    myFile<<"Hii Akshat Welcome to The File";
    cout<<"Enter the number";
    cin>>a;
    cout<<"Enter the number 2";
    cin>>b;
    c= a+b;
    cout<<"Addition is "<<c; //Terminal Print
    myFile<<endl<<" \n \t Addition is "<<c; // File print
    myFile.close();
    myReadFile.open("Aks.txt");
    while(getline(myReadFile,text))
    {
        cout<<text;
    }
    myReadFile.close();
    //String Fetch => read from file fprint => write  , fscanf 
    // fscanf => character =>   
    return 0;
}
/*
Files: 
   fstream parent class : create , read , write etc...
1)ifstream :
    Read from File
=> String => Data copy => Print That String 

2)ofstream :
    Create and Write in File

*/