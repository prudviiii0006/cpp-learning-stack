#include<iostream>
using namespace std;
int sumOfTwo(int x, int y){ //parameters
    int sum = x+y;
    return sum;
}
int maxOfTwo(int v, int z){
    if(v>z){
        cout << "v is greatest\n";
    } else {
        cout << "z is greatest\n";
    }
    return 0;
}
int main(){
    cout << sumOfTwo(5,6) << endl; //arguments
    cout << maxOfTwo(5,6) << endl;
    return 0;
}