#include <iostream>
using namespace std;

class MyClass{
    int a;
    public:
    MyClass(){
        a = 0;
    }
    MyClass operator ++(int){
        MyClass temp;
        temp.a = ++a;
        return temp;
    }
    void show(){
        cout<<"A: "<<a<<endl;
    }
};
int main(){
    MyClass m1,m2;
    m1.show();
    m2.show();

    m2 = m1++;
    m1.show();
    m2.show();

    return 0;
}