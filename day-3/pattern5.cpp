#include<iostream>
using namespace std;
int main(){
    int n =4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    for(int a=1; a<=n; a++){
        char ch = 'a';
        for(int b=1; b<a+1; b++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}