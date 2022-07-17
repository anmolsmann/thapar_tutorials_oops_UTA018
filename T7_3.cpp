#include <iostream>
using namespace std;

class Distance{
    int feet, inches;
    public:
        Distance(){
            feet = 0;
            inches = 0;
        }
        Distance(int f, int i){
            feet = f;
            inches = i;
        }
        void display(){
            cout<<"F: "<<feet<<endl<<"I: "<<inches<<endl;   
        }
        Distance operator-(){
            feet = -feet;
            inches = -inches;
            return Distance(feet,inches);
        }        
};

int main (){
    Distance d1(5,6);
    d1.display();
    -d1;
    d1.display();
    return 0;
}