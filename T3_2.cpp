#include <iostream>
using namespace std;

class add{
    public:
    int a;
        void Sum(add s){
            a = a + s.a;
        }
};

int main(){
    add s1, s2;
    s1.a= 100;
    s2.a= 200;

    cout<<"Initially, O1: "<<s1.a<<endl;
    cout<<"Initially, O2: "<<s2.a<<endl;

    s2.Sum(s1);

    cout<<"Eventually, O1: "<<s1.a<<endl;
    cout<<"Eventually, O2: "<<s2.a<<endl;

    return 0;
}