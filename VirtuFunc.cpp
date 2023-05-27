#include<iostream>
using namespace std;
class Parent 
 {
            public:
            virtual void method()
            {
                            cout<<"Parent class Method";
            }
 };
class Child : public Parent
{
            public:
            void method()
            {
                        //redefine 
                        cout<<"Child class Method";
            }
};
int main()
{
      Child obj;
      Parent *obj1 = &obj; // pointer of parent type that points to child object
      obj1->method(); // Parent Class  
}
/*
virtual function : 
        member function base class redifine child class
        overriding : 
            class Parent 
            {
                    virtual void method()
                    {
                        
                    }
            };
            class Child : public Parent
            {
                    void method()
                    {
                        //redefine 
                    }
            };
            int main()
            {
                Child obj;
                Parent *obj1;
                obj1->method(); // Parent Class  
            }
*/