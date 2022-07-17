#include <iostream>
using namespace std;

class Employee{
    int id;
    public:
        void setData(int a){
            id = a;
        }
        void getData(){
            cout<<"The id of this employee is: "<<id<<endl;

        }
};

int main(){
    Employee *ptr = new Employee[3];
    Employee *ptrTemp = ptr;
    int i,b;
    for(i=0;i<3;i++){
        cout<<"Enter the id of the employee "<<i+1<<endl;
        cin>>b;
        ptr->setData(b);
        ptr++;
    }
    for(i=0;i<3;i++){
        cout<<"Number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
}
