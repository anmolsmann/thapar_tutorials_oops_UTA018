#include <iostream>
#include <cstring>
using namespace std;

class House{
    protected:
        string location;
        int BHK;
    public:
        House(string s, int type){
            location = s;
            BHK = type;
        }
        virtual void display(){}
};

class Mansion : public House{
    int lot;
    public:
        Mansion(string s, int type, int numb): House(s,type){
            lot = numb;
        }
        void display(){
            cout<<"This is an amazing mansion in the location "<<location<<endl;
            cout<<"BHK: "<<BHK<<endl;
            cout<<"The lot number is: "<<lot<<endl;
        }
};

class Apartment : public House{
    int towerNumb;
    public:
        Apartment(string s, int type, int tnumb): House(s,type){
            towerNumb = tnumb;
        }
        void display(){
            cout<<"This is an amazing apartment in the location "<<location<<endl;
            cout<<"BHK: "<<BHK<<endl;
            cout<<"The Tower Number is: "<<towerNumb<<endl;
        }
};

int main(){
    string location;
    int BHK, lot, towerNumb;

    location = "Orange County";
    BHK = 4;
    lot = 8;
    Mansion OC(location, BHK, lot);
   // OC.display();

    location = "Pasadena";
    BHK = 3;
    towerNumb = 5;
    Apartment PD(location, BHK, towerNumb);
    //PD.display();
    
    House *fns[2];
    fns[0] = &OC;
    fns[1] = &PD;

    fns[0]->display();
    fns[1]->display();

    return 0;
}