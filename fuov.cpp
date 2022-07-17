#include <iostream>
using namespace std;

class base{
    int a;
    double b;
    public:
        void setdata(int x){
            a = x;
        }
        void show(){
            cout<<"first function"<<endl;
            cout<<"value: "<<a<<endl;
        }
        void setdata(double y){
            b = y;
        }
        void display(){
            cout<<"overloaded function"<<endl;
            cout<<"value: "<<b<<endl;
        }
};

int main(){
    base b1,b2,b3;
    b1.setdata(5);
    b1.show();
    b2.setdata(3.3);
    b2.display();

    return 0;

}