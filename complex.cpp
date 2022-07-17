#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
        void setData(int x, int y){
            a = x;
            b = y;
        }

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;

        }
        void printData(){
            cout<<"Your complex number is: "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    complex c1;
    c1.setData(6,9);
    c1.printData();
    return 0;
}