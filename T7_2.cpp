#include <iostream>
using namespace std;

class Distance{
    public:
    int x,y;
    Distance(){
        x = 0;
        y = 0;
    }
    Distance(int a, int b){
        x = a;
        y = b;
    }
    Distance operator + (Distance &d){
        Distance d3;
        d3.x = x+d.x;
        d3.y = y+d.y;

        return d3;
    }
};

int main(){
    Distance d1(5,6);
    Distance d2(8,9);

    Distance d3;

    d3 = d1 + d2;

    cout<<endl<<"Total distance: "<<d3.x<<", "<<d3.y;
    
    return 0;
}