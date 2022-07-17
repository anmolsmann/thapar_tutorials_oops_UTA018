#include <iostream>
using namespace std;

class base{
    int x,y;
    public:
    void setfunc(int a, int b){
        x = a;
        y = b;
    }
    void showfunc(){
        cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    }
};

class derived : public base{
    int rw, lw;
    public:
        void setdata(int c, int d){
            rw = c;
            lw = d;
        }
        void showdata(){
            cout<<"The value of rw is "<<rw<<" and lw is "<<lw<<endl;
        }
};

int main(){
    base *b = new base();
    b->setfunc(6,9);
    b->showfunc();

    /*base *b = new derived();
    b->setdata(7,5);
    b->showdata();*/
return 0;
    

}