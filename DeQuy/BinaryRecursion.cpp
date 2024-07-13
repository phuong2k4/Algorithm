// de quy nhi phan

#include<iostream>

using namespace std;

int binaryRe(int n){
    if(n<=2)return 1;
    return binaryRe(n-1) + binaryRe(n-2);
}

int main(int argc, char** argv[]){
    int n;
    cin >> n;
    cout << binaryRe(n);
    return 0;
}