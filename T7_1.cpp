#include <iostream>
using namespace std;

class base{
    int a;
    public:
    base(){
        a = 0;
    }
    void set(int x){
        a = x;
    }
    void operator ++(){
        ++a;
    }
    void show(){
        cout<<"The value after overloading is: "<<a<<endl;
    }
};

int main(){
    base b1;
    b1.set(5);
    ++b1;
    b1.show();
}