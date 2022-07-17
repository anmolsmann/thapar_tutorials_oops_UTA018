#include <iostream>
using namespace std;

class base{
    private:
    int pv = 3;
    protected:
    int pd = 4;
    public:
    int pc = 5;

    int getpv(){
        return pv;
    }
};

class pdbase : protected base{
    public:
    int getpd(){
        return pd;
    }
    int getpc(){
        return pc;
    }
};

int main(){
    pdbase p1;
    cout<<"Private cannot be accessed"<<endl;
    cout<<"Protected member is: "<<p1.getpd()<<endl;
    cout<<"Public member is: "<<p1.getpc()<<endl;
    
    return 0;
}