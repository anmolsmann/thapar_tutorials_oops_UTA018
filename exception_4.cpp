#include <iostream>
using namespace std;

void test(int x) throw(char,double){
    if(x==0)
    throw 'x';
    else if(x==1)
    throw x;
    else if(x==-1)
    throw 1.0;
}
int main(){
    try{
        cout<<"Testing throw"<<endl;
        cout<<"x==0"<<endl;
        test(0);
        cout<<"x==1";
    }
    catch(char c){
        cout<<"Caught a character"<<endl; 
    }
    catch(int m){
        cout<<"Caught an integer"<<endl;
    }
    return 0;
}