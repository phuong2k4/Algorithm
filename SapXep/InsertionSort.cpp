#include<iostream>

using namespace std;

void insertionSort(int a[],int n)
{
    for(int i=1;i<n;i++){
        int flag = a[i];
        int j = i-1;
        while (j >=0 && flag < a[j] )
        {
            a[j + 1]=a[j];
            --j;
        }
        a[j + 1] = flag;
    }
}

int main(){
    int n,a[1000];
    cin>>n;
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    //call algorihtm
    insertionSort(a,n);
    //print result
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}