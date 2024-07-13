#include<iostream>
// use binaryRE
using namespace std;

int combination(int n, int k){
    if(k ==0 || n==k){
        return 1;
    }
    return combination(n-1,k) + combination(n-1,k-1);
}

int main(int argc, char** argv[]){
    int n,k;
    cin >> n >> k;
    cout <<combination(n,k);
    return 0;
}