#include<iostream>
using namespace std;
int passN(int a, int b){
    a = a+10;
    b = b+5;
    int sum = a+b;
    return sum;
}
int main(){
    int a =5, b=6;
    cout << passN(a,b) << endl;
    cout << a << endl;
    cout << b << endl;
    return 0;
}