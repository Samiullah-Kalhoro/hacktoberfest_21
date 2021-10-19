#include<iostream>
#include<iomanip>
using namespace std;
class SN{
private:
int serial_number=0;

public:
SN(){
    serial_number++;
    cout<<"serial number for "<<serial_number<<" object is "<<serial_number;
}

};
int main (){
    SN obj1;

        return 0;
}

