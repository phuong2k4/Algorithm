#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
//adj la danh sach ke ,1001 danh sach ke
vector<pair<int,int>> edge;
// mot vector chua phan tu pair , phan tu cua vector chua dinh va canh 
//int, int la hai gia tri nguyen cua dinh va canh 
//edge la vetor chua cac canh trong do thi
int a[1001][1001];
// cho a co 1001 dinh va 1001 canh
int main(){
	cin >> n;// quet mot gia tri ten la n
	cin.ignore();// cau lenh co y nghia loai bo ky tu sau khi nhap ham 
	// khac cua cin, cin >>, getline()
	for(int i=1; i<=n;i++){
		string s, num; //xu ly chuoi ki tu co do dai linh hoat 
		getline(cin, s);// doc du lieu tu ban phim hoac tep duoi dang string (chuoi)
		stringstream ss(s);//doc va xu ly dau ra dau vao, tach rieng le thanh phan 
		// cua chuoi roi luu tru chung vao cac bien
		while(ss>>num){//doc du lieu bien ss va luu vao bien num
		// o mang chuoi string khai bien o tren
			if(stoi(num)>i){
				edge.push_back({i,stoi(num)});// trong push_back la 2 gia tri nguyen
				//edge.push_back la de them 1 canh moi vao cuoi phan tu cua vector edge 
			}
			//gan gia tri 1 vao phan tu so nguyen cua mang a tai hang i
		}//stoi la ham bien chuoi ky tu thanh so nguyen 
	}
	for(auto it : edge ){
		cout <<it.first <<" "<< it.second << endl;//in ra diem dau va diem cuoi cua 2 dinh ke
	}
	
}