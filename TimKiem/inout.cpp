#include <iostream>

using namespace std;

void inArr(int a[],int n){
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
}
void outArr(int a[],int n){
    for(int i =0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
