#include <iostream>
using namespace std;

class Base{
    int var_base=69;
        public:
        virtual void display(){
            cout<<"The value of var_base is  "<<var_base<<endl;
        }
};

class Derived : public Base{
    int var_derived=96;
        public:
        void display(){
            cout<<"The value of var_derived is  "<<var_derived<<endl;

        }
};

int main(){
    Base * bptr;
    Base obj1;
    Derived obj2;

    bptr = &obj2;
    bptr->display();
}