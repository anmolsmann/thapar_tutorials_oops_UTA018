#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file;
    char ch;
    file.open("demofile.txt", ios::in);
    file.seekg(5L, ios::beg);
    file.get(ch);
    cout<<"Byte 5 from the beginning: "<<ch<<endl;
    file.seekg(-10L, ios::end);
    file.get(ch);
    cout<<"Byte 10 from the ending: "<<ch<<endl;
    file.close();

    return 0;
}