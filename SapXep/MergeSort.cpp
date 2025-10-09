#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

//Tron  day con tu l -> mid voi tu m+1 -> r (2 day con nay da duoc sap xep)
//Tron va dua vao mang ban dau

void merge(int a[],int l,int m,int r)
{
    vector<int> x(a+l,a+m+1);//tao mang linh hoat
    vector<int> y(a+m+1,a+r+1);
    int i = 0 , j = 0;
    while(i<x.size()&&j<y.size()){//tu 0 den cac gia tri trong danh sach con
        if (x[i]<=y[j])
        {
            a[l]=x[i]; ++l;++i;
        }
        else{
            a[l]=y[j]; ++l ; ++j;
        }
        
    }
    while (i<x.size()){
        a[l]=x[i]; ++l;++i;
    }
    while (j<y.size()){
        a[l]=y[j]; ++l;++j;
    }
}
void mergesort(int a[],int l,int r){
    if(l>=r){
        return ;
    }
    int m = (l+r)/2;
    mergesort(a,l,m); 
    mergesort(a,m+1,r);
    merge(a,l,m,r);
}


void mergeSortV2(int x[],int m, int y[],int n,int z[]){
    int i = 0,j=0,k = 0;
    while(i < m && j < n){
        if(x[i] < y[j]){
            z[k] = x[i]; k++;i++;
        }else{
            z[k] = y[j]; k++;j++;
        }
    }
    while(i<m){
        z[k] = x[i]; k++;i++;
    }
    while(j<n){
        z[k] = y[j]; k++;j++;
    }
}

int main(){
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    mergesort(a,0,n-1);
    for(int i = 0;i<n;i++){
        cout << a[i] << " ";
    }
    return 0;
}