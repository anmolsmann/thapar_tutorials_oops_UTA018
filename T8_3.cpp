#include <iostream>
using namespace std;

template < class T1, class T2 > void show(T1 x, T2 y){
    cout<<x<<" "<<y<<" "<<endl;
}

int main(){
    show(100,"hello hello");
    show('k', 1500);
    show(1.23, 2987);

    return 0;
}