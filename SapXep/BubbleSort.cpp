#include<algorithm>
#include<iostream>

using namespace std;

void BubleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        bool swap = false;
        for (int j=i+1;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swap = true;
            }
        }
        if(!swap){
            break;
        }
    }
}

int main(){
    int n;
    int a[1000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    BubleSort(a,n);

    for (int i=0;i<n;i++){
        cout << a[i] <<" ";
    }
    return 0;
}