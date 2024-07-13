#include<iostream>

using namespace std;

// uoc chung lon nhat
int gcd1(int a,int b){
    if(b==0){
        return a;
    }
    return gcd1(b,a%b);
}

int gcd2(int m,int n){
    int r;
    if(m<n)return gcd2(n,m);
    r = m%n;
    if(r==0)return n;
    return gcd2(n,r);
}

int main(){
    int m,n;
    cin >> m >> n;
    cout << "Greatest common divisor: " << gcd2(m,n);
    return 0;
}