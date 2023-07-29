#include<bits/stdc++.h>
#include<conio.h>
#include<algorithm>
#include<iostream>

using namespace std;


int cnt[1000001];

int main(){
    int a[1000],n;
    cin >> n;
    int m=INT_MIN;
    for(int i=0;i<=n;i++){
        cin >> a[i];
        cnt[a[i]]++;
        m=max(m,a[i]);
    }  
    
    for(int i=0;i<=m ; i++){
        if (cnt[i]!=0){
            for(int j=0;j<cnt[i];j++){
                cout << i << " ";
            }
        }
    }
    getch();
    return 0;

}
