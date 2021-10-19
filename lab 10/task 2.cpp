#include<iostream>
#include<iomanip>
using namespace std;
class Myclass{
private:
int num;

public:
void initialize(int x=0;){
num=x;
cout<<x;
}

};
int main ()     {
    SN obj1;
    cout<<obj1.initialize();

        return 0;
}

