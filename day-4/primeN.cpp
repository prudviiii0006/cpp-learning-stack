#include<iostream>
using namespace std;
int primeN(int n){
    bool isPrime = true;
    for(int i=2; i<=n; i++){
        if(n%2==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime==true){
        cout << "prime number\n";
    }  else {
        cout<< "non-prime number\n";
    } 
    return isPrime;
}
int main(){
    cout << "the entered number is: "<< primeN(4) << endl; 
    return 0;
}