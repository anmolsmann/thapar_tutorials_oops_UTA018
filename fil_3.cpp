#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream datafile;
    char line[81];
    datafile.open("demofile.txt", ios::in);
    if(!datafile){
        cout<<"Error occured"<<endl;
    }
    cout<<"Opening file"<<endl<<"Reading information"<<endl;
    datafile.getline(line,81);
    while(!datafile.eof()){
        cout<<line<<endl;
        datafile.getline(line,81);
    }
    datafile.close();
    return 0;
}