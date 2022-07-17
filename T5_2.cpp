#include <iostream>
using namespace std;

class animal{
    private:
    string color;
    protected:
    string type;
    public:
    void eat(){
        cout<<"I can eat!"<<endl;
    }
    void sleep(){
        cout<<"I can sleep!"<<endl;
    }
    void setcolor(string s){
        color = s;
    }
    string getcolor(){
        return color;
    }
};

class dog : public animal{
    public:
    void setType(string t){
        type = t;
    }
    void displayInfo(string st){
        cout<<"I am a "<<type<<endl;
        cout<<"My color is "<<st<<endl;
    }
    void bark(){
        cout<<"I can bark!"<<endl;
    }
};

int main(){
    dog d1;
    d1.eat();
    d1.sleep();
    d1.setcolor("black");

    d1.setType("mammal");
    d1.bark();
    d1.displayInfo(d1.getcolor());

}