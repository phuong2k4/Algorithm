#include<bits/stdc++.h>
using namespace std;


int n,m;
vector<int> adj[1001];
//adj la ham luu danh sach ke cua dinh i
vector<pair<int,int>> edge;
// mot vector chua phan tu pair , phan tu cua vector chua dinh va canh 
//int, int la hai gia tri nguyen cua dinh va canh 
//edge la vetor chua cac canh trong do thi
int a[1001][1001];

int main()
{
	cin >> n;
	for(int i=1; i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1; i<=n;i++){
		for(int j=1;j<=n;j++){
			if(cin>>a[i][j] && i<j){
				edge.push_back({i,j});
			}
}
}
for(auto it : edge ){
	cout << it.first << " " << it.second << endl;
}
}