#include <iostream>
using namespace std;

class shoes{
    protected:
    int laceholes;
    string name;
    public:
    shoes(int l, string s){
        laceholes = l;
        name = s;
    }
    virtual void display(){}
};

class sneakers : public shoes{
    int levstyle;
    public:
    sneakers(int l, string s, int ls) : shoes(l,s){
        levstyle = ls;
    }
    void display(){
        cout<<"The number of laceholes in these very cool sneakers are: "<<laceholes<<endl;
        cout<<"The name of the brand is: "<<name<<endl;
        cout<<"The level of style is: "<<levstyle<<endl;
    }
};

class dressShoes : public shoes{
    int levclass;
    public:
    dressShoes(int l, string s, int lc) : shoes(l,s){
        levclass = lc;
    }
    void display(){
        cout<<"The number of laceholes in these very classy dress shoes are: "<<laceholes<<endl;
        cout<<"The name of the brand is: "<<name<<endl;
        cout<<"The level of class is: "<<levclass<<endl;
    }
};

int main(){
    string name;
    int laceholes, levstyle, levclass;

    name = "Adidas";
    laceholes = 16;
    levstyle = 4;
    sneakers ss(laceholes, name, levstyle);

    shoes *fns[1];
    fns[0] = &ss;
    (*fns[0]).display();
   // fns[0]->display();

}
