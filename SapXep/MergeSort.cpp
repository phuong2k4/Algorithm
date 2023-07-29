#include<bits/stdc++.h>
#include<iostream>
 #include<conio.h>
#include<algorithm>

using namespace std;

//Tron  day con tu l -> mid voi tu m+1 -> r (2 day con nay da duoc sap xep)
//Tron va dua vao mang ban dau

void merge(int a[],int l,int m,int r)
{
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i = 0 , j = 0;
    while(i<x.size()&&j<y.size()){
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

int main(){
    int n=100;
    int a[100];
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
        a[i]=rand()%1000;
    }
    mergesort(a,0,n-1);
    for(int x: a){
        cout << x << " ";

    }
    getch();
    return 0;
}