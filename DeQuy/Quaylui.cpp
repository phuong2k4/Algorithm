#include<iostream>
#include<algorithm>
#include<conio.h>


using namespace std;

int n,X[100];

void inkq(){
    for(int i=1;i<=n;i++){
        cout << X[i];
    }
    cout << endl;
}

void Try(int i){
     for(int j=0;j<=1;j++){
        X[i]=j;
        if(i == n){
            inkq();
        }
        else{
            Try(i+1);
        }
    }

}

int main(){
    
    cin>> n;
    Try(1);
    return 0;
}