#include<iostream>
using namespace std;
int digitSum(int num){
    int digitSum = 0;
    while(num > 0){
        int lastDig = num % 10;
        num /= 10;
        digitSum += lastDig;
    }
    return digitSum;
}
int main(){
    cout << "sum = " << digitSum(2356) << endl;
    return 0;
}