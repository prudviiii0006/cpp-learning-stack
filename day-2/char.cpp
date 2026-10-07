#include<iostream>
using namespace std;
int main(){
    char ch;
    int n =4;
    cout << "enter a character!\n";
    cin >> ch;
    if(ch>=65 && ch<=90){
        cout << "upper case!\n";
    }
    else{
        cout << "lower case!\n";
    }
    cout << (n>=0 ? "positive":"negative") << endl; //ternary statement
    return 0;
}