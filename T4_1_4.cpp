#include <iostream>
using namespace std;

class copcon{
    int x;
    int y;
        public:
        copcon(int x1, int y1){
            x = x1;
            y = y1;
        }
        copcon(const copcon &i){
            x = i.x;
            y = i.y;
        }
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
};

int main(){
    copcon c1(10,20);
    copcon c2=c1;
    cout<<"c1.x: "<<c1.getX()<<"and c1.y: "<<c1.getY()<<endl;
    cout<<"c2.x: "<<c2.getX()<<"and c2.y: "<<c2.getY();
}