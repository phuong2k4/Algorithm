#include<iostream>
#include"inout.cpp"
using namespace std;


int linearSearch(int a[],int n, int m){
    int i;
    for (i = 0;(i<n)&&(a[i]==m);i++);
    if(i==n){
        return -1;
    }
    return i;
}

int main(int agrc, char** argv[]){
    int n,m;
    cin >> n >> m;
    int a[n];
    input(a,n);
    if(linearSearch(a,n,m)){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}