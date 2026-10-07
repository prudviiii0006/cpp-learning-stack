#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n value\n";
    cin >> n;
    if(n%2==0){
        cout << "even number!\n";
    }
    else{
        cout << "odd\n";
    }
    if(n>0){
        cout << "the number is positive!\n";
    }
    else{
        cout << "the number is negative!\n";
    }
    return 0;
}
