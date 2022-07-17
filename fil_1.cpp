#include <iostream>
#include <fstream>

using namespace std;

int main(){
    fstream datafile;
    char line[81];
    datafile.open("demofile.txt", ios:: out);
    if(!datafile){
        cout<<"Error opening"<<endl;
    }
    cout<<"File opened successfully!"<<endl;
    cout<<"Writing to the file"<<endl;
    datafile<<"Dwight"<<endl;
    datafile<<"Moosewala"<<endl;
    datafile.close();

    return 0;

}