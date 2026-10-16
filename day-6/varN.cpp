#include<iostream>
using namespace std;
int x = 10; // global variables
int demo(){
    cout << x << endl;
    return 0;
}
int main(){
    int a = 15; // local variables
    cout << x << endl;
    cout << a << endl;
    return 0;
}