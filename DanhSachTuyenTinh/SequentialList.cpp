#include <bits/stdc++.h>
#define MAX 100
using namespace std;

struct SinhVien
{
	string masv;
	string ho_ten;
	int tuoi;
	double diem_tb;
};

struct DanhSach
{
	int count;
	SinhVien sv[MAX];
};

void createAStudent(SinhVien &sv)
{
	cout << "-Nhap Thong Tin Sinh Vien-" << endl;
	cout << "Nhap ma sinh vien: ";
	getline(cin, sv.masv);
	cout << "Nhap ho ten sinh vien: ";
	getline(cin, sv.ho_ten);
	cout << "Nhap tuoi sinh vien: ";
	cin >> sv.tuoi;
	cin.ignore();
	cout << "Nhap diem trung binh: ";
	cin >> sv.diem_tb;
	cin.ignore();
}

void input(DanhSach &ds)
{
	cout << "Nhap so luong sinh vien: " << endl;
	cin >> ds.count;
	cin.ignore();
	for (int i = 0; i < ds.count; i++)
	{
		createAStudent(ds.sv[i]);
	}
}

bool isEmpty(DanhSach &ds)
{
	return ds.count < 0;
}
bool isFull(DanhSach &ds, int total)
{
	return total >= ds.count;
}
void showAStudent(SinhVien &sv)
{
	cout << left << setw(10) << sv.masv
		 << setw(20) << sv.ho_ten
		 << setw(20) << sv.tuoi
		 << setw(10) << sv.diem_tb << endl;
}

void output(DanhSach &ds)
{
	if (isEmpty(ds))
	{
		cout << "Danh sach trong!!!" << endl;
		return;
	}
	cout << "===================================" << endl;
	cout << "        Danh sach sinh vien        " << endl;
	cout << "===================================" << endl;

	cout << left << setw(10) << "Ma Sv"
		 << setw(20) << "Ho Ten"
		 << setw(20) << "Tuoi"
		 << setw(10) << "Diem trung binh" << endl;

	for (int i = 0; i < ds.count; i++)
	{
		showAStudent(ds.sv[i]);
	}
}

void showAgeUnder18(DanhSach &ds)
{
	if (isEmpty(ds))
	{
		cout << "Danh sach trong" << endl;
		return;
	}
	cout << "===========================================================" << endl;
	cout << "-Thong tin Sinh Vien duoi 18 tuoi-" << endl;
	cout << left << setw(10) << "Ma Sv"
		 << setw(20) << "Ho Ten"
		 << setw(20) << "Tuoi"
		 << setw(10) << "Diem trung binh" << endl;
	for (int i = 0; i < ds.count; i++)
	{
		if (ds.sv[i].tuoi < 18)
		{
			showAStudent(ds.sv[i]);
		}
	}
}

void searchName(DanhSach &ds)
{
	if (isEmpty(ds))
	{
		cout << "Danh sach trong" << endl;
		return;
	}
	cout << "-Ten Sinh Vien Muon Tim-" << endl;
	string name;
	getline(cin, name);
	cout << "===========================================================" << endl;
	cout << "-Thong tin Sinh Vien-" << endl;
	cout << left << setw(10) << "Ma Sv"
		 << setw(20) << "Ho Ten"
		 << setw(20) << "Tuoi"
		 << setw(10) << "Diem trung binh" << endl;
	for (int i = 0; i < ds.count; i++)
	{
		if (ds.sv[i].ho_ten == name)
		{
			showAStudent(ds.sv[i]);
		}
	}
}
void findAndDelStudent(DanhSach &ds)
{
	if (isEmpty(ds))
	{
		cout << "Danh sach trong" << endl;
		return;
	}
	cout << "-Ten Sinh Vien Muon Tim-" << endl;
	string name;
	getline(cin, name);

	SinhVien sv;
	for (int i = 0; i < ds.count; i++)
	{
		if (ds.sv[i].ho_ten == name)
		{
			sv = ds.sv[ds.count - 1];
			ds.sv[ds.count - 1] = ds.sv[i];
			ds.sv[i] = sv;
			ds.count--;
		}
	}
	output(ds);
}

int insert(DanhSach &ds, int index, SinhVien &sv)
{
	if(index <= ds.count && index>0){
		for (int i = ds.count; i >= index; i--)
		{
			ds.sv[i + 1] = ds.sv[i];
		}
		ds.sv[index] = sv;
		ds.count++;
		return 1;
	}
	return 0;
}

void insertStudent(DanhSach &ds)
{
	SinhVien sv;
	cout << "-Nhap Thong Tin Sinh Vien-" << endl;
	cout << "Nhap ma sinh vien: ";
	getline(cin, sv.masv);
	cout << "Nhap ho ten sinh vien: ";
	getline(cin, sv.ho_ten);
	cout << "Nhap tuoi sinh vien: ";
	cin >> sv.tuoi;
	cin.ignore();
	cout << "Nhap diem trung binh: ";
	cin >> sv.diem_tb;
	cin.ignore();

	int index;
	cout << "Vi tri Cua Sinh Vien" << endl;
	cin >> index;
	if (insert(ds, index, sv))
	{
		cout << "Thanh cong!" << endl;
		return;
	}
	cout << "Khong thanh cong!" << endl;
	return;
}

int main()
{
	DanhSach ds;
	input(ds);
	output(ds);
	insertStudent(ds);
	output(ds);
	return 0;
}