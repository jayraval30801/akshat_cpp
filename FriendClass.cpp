#include<iostream>
using namespace std;
class Hospital
{
    int patientId;
    string name;
    string disease;
    //declaration of patient class
    friend class Patient;
};
class Patient
{
       public:
       void InputData(Hospital& obj)
       {
        cout<<"Enter PatientId ";
        cin>>obj.patientId;
        cout<<"Enter Name";
        cin>>obj.name;
        cout<<"Enter Disease";
        cin>>obj.disease;
       } 
       void disData(Hospital& obj)
       {
        cout<<"Name"<<obj.name<<"Disease"<<obj.disease;
       }
};
int main()
{
        Patient obj;
        Hospital obj2;
        obj.InputData(obj2);
        obj.disData(obj2);
}