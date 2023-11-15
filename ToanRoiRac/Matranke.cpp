#include<bits/stdc++.h>
#include<iostream>
//ma tran ke 
//danh sach canh
//danh sach ke

using namespace std;
int n,m; //n la so dinh, m la so canh
int a[1001][1001];
int main(){
	cin >> n >> m;//Nhap n dinh va m canh
	for(int i=0; i<m; i++)//cho i tu o den m canh
	{
		int x,y; //Nhap cac dinh ke cua do thi
		cin >> x >> y;
		a[x][y]=a[y][x]=1; // cong thuc ma tran
		
	}
	for(int i=1;i<=n;i++){ //cho i tu 1 den n dinh 
		for(int j=1;j<=n;j++){ 
			cout << a[i][j] <<" ";// i,j la 2 dinh ke voi nhau
		}
		cout <<endl;
	}
}
