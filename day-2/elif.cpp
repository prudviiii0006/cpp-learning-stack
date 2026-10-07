#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "enter your marks!\n";
    cin >> marks;
    if(marks>=90){
        cout << "you have scored a grade!\n";
    } 
    else if(marks>=80 && marks < 90){
        cout << "you have scored b grade!\n";
    }else{
        cout << "you have scored c grade!\n";
    }
    return 0;
}