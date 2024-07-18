#include<iostream>
#include "Function/sorts.cpp"

using namespace std;


struct Products{
    int code;
    char name[100];
    float price;
};


void inStruct(Products pd[], int n){
    for(int i =0;i<n;i++){
        cin >> pd[i].code;
        cin >> pd[i].name;
        cin >> pd[i].price;
    }
}

void outStruct(Products pd[], int n){
    for(int i =0;i<n;i++){
        cout << pd[i].code << " " << pd[i].name << " " << pd[i].price << endl;
    }
}

float binarySearch(Products pd[], int n, float x){
    int left = 0, right = n-1;

    while(left<=right){
        int mid = (left+right)/2;
        if (x>pd[mid].price){
            left = mid+1;
        }else if(x<pd[mid].price){
            right = mid-1;
        }else{
            cout << pd[mid].name << " " << pd[mid].price << "$ \n";
            return pd[mid].price;
        }
    }
    return -1;
}

int main(int argc,char** argv[]){
    int n;
    cin >> n;
    Products pd[n];
    inStruct(pd, n);
    outStruct(pd,n);
    float x; cin >> x;
    if(binarySearch(pd, n,x)){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}