#include <iostream>
using namespace std;

class mansion{
    int lot;
    public:
    void setlot(int s){
        lot =s;
    }
    void displaym(){
        cout<<"This is a feature of a mansion, lot number: "<<lot<<endl;
    }
};

class apartment{
    int towernumb;
    public:
    void settow(int t){
        towernumb = t;
    }
    void displaya(){
        cout<<"This is a feature of an apartment, tower number: "<<towernumb<<endl;
    }
};

class house : public mansion, public apartment{
    int BHK;
    public:
    void setrromno(int st){
        BHK = st;
    }
    void displays(){
        cout<<"BHK: "<<BHK<<endl;
    }
};

int main(){
    house h1;
    h1.setlot(6);
    h1.displaym();
    h1.settow(5);
    h1.displaya();

    h1.setrromno(69);
    h1.displays();
    return 0;
}