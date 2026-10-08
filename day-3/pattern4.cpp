#include<iostream>
using namespace std;
int main(){
    int n =4;
    char ch = 'a';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << (i+1) << " ";
        }
        cout << endl;
    }
    for(int a=0; a<n; a++){
        for(int b=0; b<a+1; b++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}