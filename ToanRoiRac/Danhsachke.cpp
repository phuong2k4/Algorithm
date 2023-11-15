#include<bits/stdc++.h>

using namespace std;

int n,m;// n dinh, m canh
vector<int> adj[1001]; 
//in danh sach ke va luu danh sach ke cua dinh i

int main(){
	cin >> n >> m;//quet n dinh va m canh
	for(int i=0; i<m; i++)//cho i =0 va tu 0 cho den m canh
	{
		int x,y;//x va y la hai dinh ke 
		cin>>x>>y;//quet 2 dinh nay bang so nguyen 
		adj[x].push_back(y);//adj la danh sach ke, danh sach ke dinh x se them dinh y vao danh sach ke do 
		adj[y].push_back(x);//adj la danh sach ke, danh sach ke dinh y se them dinh x vao danh sach ke do 
	}
	for(int i=1; i<=n;i++)// cho i =1 va tu i den n dinh 
	{
		cout <<i<<" : ";
		for(int x : adj[i]){//dinh x voi trang thai la so nguyen, danh sach ke cua i dinh ke 
		
			cout <<x<< " ";
		}
	}cout << endl;
}
