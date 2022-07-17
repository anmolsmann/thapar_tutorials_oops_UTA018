#include <iostream>
using namespace std;

template <class T> class number{
    private:
    T num;
    public:
    number(T n){
        num = n;
    }
    T getnum(){
        return num;
    }
    T divideBy2(){
        return num/2;
    }
};

int main(){
    number<int> numberInt(7);
    cout<<"int number: "<<numberInt.getnum()<<endl;
    cout<<"Division: "<<numberInt.divideBy2()<<endl;

    return 0;
}

