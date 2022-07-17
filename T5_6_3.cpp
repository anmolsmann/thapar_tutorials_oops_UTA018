#include <iostream>
using namespace std;

class ford{
    int numofcol;
    string tyrecomp;
    public:
    void numcol(int c){
        numofcol = c;
    }
    void displayc(){
        cout<<"The number of colours available are: "<<numofcol<<endl;
    }
    void tyre(string s){
        tyrecomp = s;
    }
    void displayt(){
        cout<<"Company of tyres is: "<<tyrecomp<<endl;
    }
};

class GT : public ford{
    int exhausts;
    public:
    void setex(int e){
        exhausts = e;
    }
    void displaygt(){
        cout<<"The number of exhausts in GT are: "<<exhausts<<endl;
    }
};

class shelby : public ford{
    int cylinders;
    public:
    void setcyl(int l){
        cylinders = l;
    }
    void displayl(){
        cout<<"The number of cylinders in shelby are: "<<cylinders<<endl;
    }
};

class hybrid : public GT, public shelby{
    public:
    void show(){
        cout<<"Waiting to see if the hybrid turns out to be a success"<<endl;
    }
};

int main(){
    GT h1;
    h1.tyre("Pirelli");
    h1.displayt();
}