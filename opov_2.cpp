#include <iostream>
using namespace std;

class loc{
    int longitude, latitude;
    public:
    loc(){
        longitude = 0;
        latitude = 0;
    }
    loc(int lg, int lt){
        longitude = lg;
        latitude = lt;
    }
    void show(){
        cout<<longitude<<" "<<latitude<<"  "<<endl;
    }
    loc operator ()(int i, int j);
    loc operator+(loc op2);
};

loc loc::operator()(int i, int j){
    longitude = i;
    latitude = j;
    return *this;
}
loc loc::operator+(loc op2){
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}

int main(){
    loc ob1(10,20), ob2(30,40);
    ob1.show();
    ob2.show();

    ob1 = ob2 + ob1(10,10);
    ob1.show();
    return 0;
}