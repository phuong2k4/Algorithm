#include<bits/stdc++.h>
#define MAX 100
using namespace std;

struct SinhVien{
	string masv;
	string ho_ten;
	int tuoi;
	double diem_tb;
};

struct DanhSach{
	int id;
	SinhVien sv[MAX];
};

void create(DanhSach &DS){
	DS.id = -1;
}

int is_empty(DanhSach &DS){
	return DS.id == -1;
}

int is_full(DanhSach &DS){
	return DS.id == MAX-1;
}

void add_element(int ele, DanhSach &DS){
	if(is_full(DS)){
		cout << "Full!!!";
		return;
	}else{
		DS.id++;
		DS.sv[DS.id] = ele;// ofcourse u know why this is wrong.
		cout << "Add complete.";
		return;
	}
	
}

void remove_element(int ele, DanhSach &DS){
	if(ele<=DS.id && ele>0){
		for(int i = ele;i<DS.id ;i++){
			DS.sv[i] = DS.sv[i+1];
		}
		DS.id--;
		cout << "Remove Complete.";
		return;
	}
	cout << "Error!!!";
}


void insert_element(DanhSach &DS, int ele, int val){
	if(ele <= DS.id && ele>0 && !is_full(DS)){
		for(int i = DS.id;i>=ele-1;i--){
			DS.sv[i+1] = DS.sv[i];
		}
		DS.sv[ele] = val;
		DS.id++;
		cout << "Insert Complete.";
		return;
	}
	cout << "Error!!!";
	
}