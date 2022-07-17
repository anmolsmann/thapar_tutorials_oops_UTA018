#include <iostream>
using namespace std;

class jersey{
    int back;
    public:
        jersey(int a){
            back = a;
        }
    void display(){
        cout<<"The jersey number is: "<<back<<endl;
    }
};

int main(){
    jersey j1(69);
    j1.display();
    return 0;
}