#include <iostream>
using namespace std;

class numofshots{
    public:
    static int i;
    numofshots(){}
};
int numofshots :: i=4;

int main(){
    numofshots nms;
    cout<<nms.i;
    return 0;
}