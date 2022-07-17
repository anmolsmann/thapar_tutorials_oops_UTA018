#include <iostream>
using namespace std;

class employee{
    int id;
    string name;
    float salary;
        public:
        employee(int id, string name, float salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
        }
        void display(){
            cout<<"ID: "<<id<<endl<<"name: "<<name<<endl<<"salary: "<<salary<<endl;
        }
};

int main(){
    employee e1(5856, "Dave", 100000);
    employee e2(4766, "Mike", 122000);
    e1.display();
    e2.display();
}