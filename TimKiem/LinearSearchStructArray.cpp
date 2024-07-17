// tim kiem nhi phan tren mang co so
#include<iostream>
#include<cstring>

using namespace std;

struct SinhVien{
    char masv[100];
    char tensv[100];
    char gioitinh[20];
};

void inStruct(SinhVien dssv[], int length){
    for(int i =0;i<length;i++){
        cin >> dssv[i].masv;
        cin >> dssv[i].tensv;
        cin >> dssv[i].gioitinh;
    }
}

void outStruct(SinhVien dssv[], int length){
    for(int i =0;i<length;i++){
        cout << dssv[i].masv  << " " << dssv[i].tensv << " " << dssv[i].gioitinh << endl;
    }
}

void search(SinhVien dssv[], int length, char masv[]){
    for(int i = 0;i<length;i++){
        if(strcmp(masv,dssv[i].masv)==0){
            cout << dssv[i].masv  << " " << dssv[i].tensv << " " << dssv[i].gioitinh << endl;
            break;
        }
    }
}

int main(int argc, char** argv[]){
    int length;
    cin >> length;
    SinhVien dssv[length];
    inStruct(dssv, length);
    outStruct(dssv, length);
    char masv[100];
    cin >> masv;
    search(dssv,length,masv);
    return 0;
}