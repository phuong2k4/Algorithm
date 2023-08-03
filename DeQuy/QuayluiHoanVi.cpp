#include<iostream>
#include<algorithm>
#include<conio.h>

using namespace std;

int n,a[100],used[100];

void inkq(){
    for(int i=1;i<=n;i++){
        cout << a[i];

    }
    cout << endl;
}

void Try(int i){
    //duyet cac kha nang ma a[i] co the nhan duoc
        for(int j=1;j<=n;j++){
         // xet xem co the gan a[i] cho j hay khong 
         if (used[j]==0){
            a[i]=j;
            used[j]=1;
         
         if(i==n){
            inkq();
         }
         else{
            Try(i+1);
         }
         //backtrack
         used[j]=0;
        }
    } 
}


int main(){
    cin>> n;
    Try(1);
    return 0;
}