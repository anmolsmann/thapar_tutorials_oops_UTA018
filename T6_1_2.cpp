#include <iostream>
using namespace std;

class car{
    public:
    virtual void show(){
        cout<<"Initially, the car only has alloys"<<endl;
    }
    void print(){
        cout<<"The beast now looks swanky"<<endl;
    }
};

class final : public car{
    public: 
    void show(){
        cout<<"After the completion, the alloys are covered with rubber tyres"<<endl;
    }
    void print(){
        cout<<"It is followed by making tyres out of rubber"<<endl;
    }
};

int main(){
    car *cptr;
    final f1;
    cptr = &f1;

    cptr->show();
    cptr->print();
    return 0;
}