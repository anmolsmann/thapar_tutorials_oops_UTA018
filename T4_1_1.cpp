#include <iostream>
using namespace std;

class Amount{
    int price;
        public:
        Amount(){
        price = 100000;
        cout<<"Calculating the amount"<<endl;
        cout<<"The price is "<<price;
        }    
};

int main(){
    Amount a1;
    return 0;
}