#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> obj;
    obj.assign(9,12); // 12 9 times 
    cout<<"Vector Elements are";
    for(int i=0;i<obj.size();i++)
    {
        cout<<obj[i]<<"";
    }
    // intset 15 at the last position
    obj.push_back(15);
    int n = obj.size();
    cout<<"\n Last elements is"<<obj[n-1]<<endl;
    // last remove element
    obj.pop_back();
    cout<<"\n The Elements are"<<endl;
    for(int i=0;i<obj.size();i++)
    {
        cout<<obj[i]<<"\t";
    }
    // beginning 5 insert
    obj.insert(obj.begin(),5);
      cout<<"First Element is"<<obj[0];
        /// remove first element
      obj.erase(obj.begin());  
        /// vector clean 
        obj.clear();

}