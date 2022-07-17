#include <iostream>
using namespace std;

class player{
    int numb;
    public:
    void setData(int a){
        numb = a;
    }
    void display(){
        cout<<"The player number is: "<<numb<<endl;
    }
};

int main(){
    player *ptr = new player[3];
    int i,b;
    for(i=0;i<3;i++){
        cout<<"Enter the number of player "<<i+1<<endl;
        cin>>b;
        ptr->setData(b);
        ptr->display();
    }
}