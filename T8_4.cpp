#include <iostream>
using namespace std;

template <class T1, class T2> void show (T1 t1, T2 t2){
    cout<<"Displaying template: "<<t1<<" "<<t2<<endl;
}
void show(int t1, int t2){
    cout<<"Displaying explicitly: "<<t1<<" "<<t2<<endl;
}

int main(){
    show(100, "hello hello");
    show(3,3);

    return 0;
}