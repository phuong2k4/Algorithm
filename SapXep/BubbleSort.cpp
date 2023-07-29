#include<algorithm>
#include<bits/stdc++.h>
#include<conio.h>

using namespace std;
int BubleSort(int a[],int n){
    int temp=0;
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    return 0;
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
    getch();
    return 0;


}