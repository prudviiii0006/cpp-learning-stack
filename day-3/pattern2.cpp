#include<iostream>
using namespace std;
int main(){
    int n = 3;
    int count = 1;
    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << ch <<" ";
            ch++;
        }
        cout << endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    cout << "afetr pattern: " << count << endl;
    return 0;
}