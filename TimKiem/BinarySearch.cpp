#include<iostream>
#include"Function/inout.cpp"
#include"Function/sorts.cpp"

using namespace std;


int binarySearch(int a[],int n, int x){
    int left = 0, right = n-1;
    int mid;
    while(left <= right){
        mid = (left+right)/2;
        if(x > a[mid]){
            left = mid + 1;
        }else if(x<a[mid]){
            right = mid - 1;
        }else{
            return a[mid];
        }
    }
    return -1;
}

int binarysearchRecursion(int a[],int x, int left, int right){
    if (left > right)return -1;
    int mid = (left+right)/2; 
    if (x==a[mid]){
        return 0;
    }else if(x>a[mid])
        return binarysearchRecursion(a,x,mid+1,right);
    return binarysearchRecursion(a,x,left,mid-1);
}

int main(int argc, char** argv[]){
    int n;
    cin >> n;
    int a[n];
    inArr(a,n);
    selectionSort(a,n);
    outArr(a,n);
    int m; cin >> m;
    if (binarySearch(a,n,m)){
        cout << "yes";
    }else{
        cout << "no";
    }
    return 0;
}