#include <iostream>
using namespace std;

class base{
    public:
    void display(){
        cout<<"This is the base function"<<endl;
    }
};

class der : public base{
    public:
    void display(){
        cout<<"This is the derived function"<<endl;

    }
};

int main(){
   /* der d1,d2;
    d1.display();
    d2.base::display();*/
    der d1;
    base *ptr = &d1;
    ptr->display();
    return 0;
}
