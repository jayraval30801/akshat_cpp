#include<iostream>
using namespace std;
class Animal
{
        protected:
        string breed;
        string name;
        int age;
        string color;
        public:
        Animal(string nm,string bd,int a,string c)
        {
                name=nm;
                breed = bd;
                age = a;
                color=c;
        }
        void printInfo()
        {
               cout<<"Name is"<<name<<endl;
               cout<<"Age "<<age<<endl; 
               cout<<"Breed "<<breed<<endl;
               cout<<"Color "<<color<<endl; 
        }
        

};
class Cat : public Animal
{
    private:
    bool isFriendly;
    public:
    Cat(string nm,string bd,int a,string c,bool friendly): Animal(nm,bd,a,c)
    {
        isFriendly = friendly;    
    }
    void printInfo()
    {
        Animal::printInfo();
        cout<<"Cat is" << (isFriendly?"yes":"no")<<endl;
    }
};
int main()
{
        Cat obj("Rani","Pershian",2,"Black",1);
        obj.Animal::printInfo();
}