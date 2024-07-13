#include<iostream>

using namespace std;

// De quy tuyen tinh
// giai thua
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

// tong
int sum(int n){
    if(n==1){
        return 1;
    }
    return n + sum(n-1);
}


int main(){
    int n;
    cin >> n;
    cout << "Sum: " << sum(n) << endl;
    cout << n << "! = " << factorial(n); 
    return 0;
}