#include<iostream>
#include<algorithm>
#include<conio.h>

using namespace std;

int n;int a[100];int k;

void inkq(){
    for(int i=1;i<=k;i++){
        cout << a[i];

    }
    cout << endl;
}

//i lon: n-k-i
//i nho:x[i-1]+1

int Try(int i){
    //duyet cac kha nang ma x[i] co the nhan duoc
    for (int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            inkq();
        }else{
            Try(i+1);
        }
    }
}

int main(){
cin>>n>>k;
Try(1);
}