// de quy da tuyen
#include<iostream>

using namespace std;

void inputArray(int a[],int n){
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
}

void outputArray(int a[],int n){
    for(int i =0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void printPermutations(int a[],int n,int i){
    outputArray(a,n);
    for(int j = i+1;j<n;j++){
        if(a[i]>a[j]){
            int swap = a[i];
            a[i] = a[j];
            a[j] = swap;
        }
        printPermutations(a,n,i+1);
    }
}

int main(int argc, char** argv[]){
    int n;
    cin >> n;
    int a[n];
    inputArray(a,n);
    printPermutations(a,n,0);
    // outputArray(a,n);
    return 0;
}