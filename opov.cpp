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
        cout<<longitude<<" "<<latitude<<" "<<endl;
    }
    loc operator +(loc op2){
        loc temp;
        temp.longitude = op2.longitude + longitude;
        temp.latitude = op2.latitude + latitude;
        return temp;
    }
    loc operator =(loc op2){
        longitude = op2.longitude;
        latitude = op2.latitude;
        return *this;
    }
    loc operator ++(){
        longitude ++;
        latitude ++;
        return *this;
    }

};

int main(){
    loc op1(10,20), op2(30,40), op3(50,60);
    //op1.show();
    //op2.show();
    //op1 = op1 + op2;
    
    op1 = op2 = op3;
    op1.show();

    ++op1;
    op1.show();

    op2 = ++ op1;
    op1.show();

    return 0;
}