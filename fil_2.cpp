#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream datafile;
    char name[81];
    datafile.open("demofile.txt", ios::in);
    if(!datafile){
        cout<<"Error occured"<<endl;
    }
    cout<<"File opened successfully"<<endl;
    datafile >> name;
    for(int count = 0; count<3; count++){
    cout<<name<<endl;
    datafile >> name;
    }
    datafile.close();
    cout<<"Done"<<endl;
    return 0;

}