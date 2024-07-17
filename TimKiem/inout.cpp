#include <iostream>

using namespace std;

void input(int a[],int n){
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
}
void output(int a[],int n){
    for(int i =0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
