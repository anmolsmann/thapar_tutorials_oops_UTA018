#include <iostream>
using namespace std;

void handler(int test){
    try{
        if(test){
            throw test;
        }
        else{
            throw "Value is zero";
        }
    }
    catch (int i){
        cout<<"Caught exception #: "<<i<<endl;
    }
    catch(const char * str){
        cout<<"Caught a string: "<<str<<endl;
    }
}

int main(){
    cout<<"start"<<endl;
    handler(1);
    handler(2);
    handler(3);
    handler(0);

    return 0;
}