#include<iostream>

using namespace std;

int selection(int a[],int n){
    for (int i=0;i<=n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(a[i],a[min]);
    }
    return 0;
}
int main(){
    int a[1000],n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    //call algorithm
    selection(a,n);
    //print result
    for (int i =0;i<n;i++){
        cout << a[i]<<" ";
    }
    return 0;
}