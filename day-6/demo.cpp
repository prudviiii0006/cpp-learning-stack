#include<iostream>
using namespace std;
int main(){
    int a=4, b=8;
    cout << (a&b) << endl; //bitwise and
    cout << (a|b) << endl; //bitwise or
    cout << (a^b) << endl; //bitwise xor
    cout << (a<<b) << endl; //bitwise leftshift
    cout << (a>>b) << endl;  //bitwise rightshift
    return 0;
}