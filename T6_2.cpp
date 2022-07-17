#include <iostream>
using namespace std;

class usa{
    int laws;
    float taxes;
        public:
        void set(int l){
            laws = l;
        }
        void show(){
            cout<<"The number of laws in the states are: "<<laws<<endl;
        }
        void sett(float t){
            taxes = t;
        }
        void showt(){
            cout<<"The amount of taxes on houses in the states are: "<<taxes<<endl;
        }      
};

class state : public usa{
    public:
    void showState(){
        cout<<"But the state taxes differ"<<endl;
    }
};

int main(){
    state *uptr;
    state u1;
    uptr = &u1;

    uptr->set(50);
    uptr->show();

    uptr->showState();
    return 0;
    
}