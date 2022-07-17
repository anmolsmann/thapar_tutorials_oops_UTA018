#include <iostream>
using namespace std;

class time{
    int hrs, min;
    public:
    time(int,int);
    operator int();
};

time :: time (int a, int b){
    hrs = a;
    min = b;
}

time :: operator int(){
    return(hrs*60+min);
}

int main(){
    int h,m,duration;
    cout<<"Enter hours: "<<endl;
    cin>>h;
    cout<<"Enter minutes: "<<endl;
    cin>>m;
    time t(h,m);
    duration = t;
    cout<<"total minutes are: "<<duration<<endl;
    return 0;
}