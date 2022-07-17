#include <iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"This is the parent class"<<endl;
    }
};

class B : public A{
    public:
    void displaytwo(){
        cout<<"This is the child class"<<endl;
    }
};

int main(){
    A a;
    a.display();
    B b;
    b.displaytwo();
}