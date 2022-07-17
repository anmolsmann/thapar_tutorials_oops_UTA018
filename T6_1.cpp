#include <iostream>
using namespace std;

class apart{
    public:
        void capacity(int x){
            cout<<"The number of people this apartment can accomodate are: "<<x<<endl;
        }
        void capacity(double x){
            cout<<"The number of cookies which can be kept in the apartment are: "<<x<<endl;
        }
        void capacity(int x, int y){
            cout<<"The number of parking spots available are "<<x<<" and the number of people per aparment are "<<y<<endl;
        }
};

int main(){
    apart a1;
    a1.capacity(5);
    a1.capacity(5.5);
    a1.capacity(20,5);

    return 0;
}