#include <iostream>
using namespace std;

void divide(int a, int b, int c){
    cout<<"Inside the function"<<endl;
    if((a-b)!=0){
        int r = c/(a-b);
        cout<<"result: "<<r<<endl;
    }
    else{
        throw(a-b);
    }
}

int main(){
    try{
        cout<<"Inside try block"<<endl;
        divide(20,10,30);
        divide(20,20,30);
    }
    catch(int i){
        cout<<"Exception caught"<<endl;
    }
    return 0;
}