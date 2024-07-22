#include<algorithm>
#include<iostream>

using namespace std;

void BubleSort(int a[],int n){
    for(int i=0;i<n;i++){
        bool swap = false;
        for (int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
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