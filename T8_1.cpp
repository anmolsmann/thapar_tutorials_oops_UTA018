#include <iostream>
using namespace std;

template <typename T> T MyMax (T x, T y){
    return (x>y) ? x:y;
}

int main(){
    cout<< MyMax <int> (3,7)<<endl;
    cout<< MyMax <double> (3.0,2.0)<<endl;
    cout<< MyMax <char> ('a', 'b')<<endl;

    return 0;
};