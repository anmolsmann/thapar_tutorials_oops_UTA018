#include <iostream>
using namespace std;

class salary{
    int base;
    int stocks;
        public:
        salary(int a, int b){
            base = a;
            stocks = b;
        }
    void display(){
        cout<<"The total salary is: "<<base+stocks<<endl;
    }
};

int main(){
    salary s1(200,30);
    s1.display();
}