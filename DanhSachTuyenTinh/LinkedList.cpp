#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(), next(nullptr) {};
    ListNode(int x) : val(x), next(nullptr) {};
    ListNode(int x, ListNode *next) : val(x), next(next) {};
};

// void create(DanhSach &DS){
//     DS.head = nullptr;
// }

// bool is_empty(DanhSach &DS){
//     return DS.head == nullptr;
// }

// void add_first(DanhSach &DS, SinhVien &sv){
//     Node *p = new Node;
//     p->sv = sv;
//     p->next = DS.head;
//     DS.head = p;
// }

// void add_last(DanhSach &ds, SinhVien &sv){
//     Node *p = new Node;
//     p->sv = sv;
//     p->next = nullptr;

//     if (ds.head == nullptr){
//         ds.head = p;
//         return;
//     }

//     Node *q = ds.head;
//     while (q->next != nullptr)
//     {
//         q= q->next;
//     }
//     q->next = p;
// }

// void remove_first(DanhSach &ds){
//     if(ds.head == nullptr) return;
//     Node *p = ds.head;
//     ds.head = ds.head->next;
//     delete p;
// }

// another example..

struct SinhVien
{
    string masv;
    string ho_ten;
    int tuoi;
    double diem_tb;
};

struct Node
{
    SinhVien sv;
    Node *next;
};

typedef Node *TRO;

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

TRO createNode(SinhVien &sv)
{
    TRO p = new Node;
    if (p == nullptr)
    {
        cout << "Khong du bo nho...";
        exit(1);
    }
    p->sv = sv;
    p->next = nullptr;
    return p;
}

void addNode(TRO &L, SinhVien &sv)
{
    TRO p = createNode(sv);
    if (L == nullptr)
    {
        L = p;
        return;
    }
    TRO q = L;
    while (q->next != nullptr)
    {
        q = q->next;
    }
    q->next = p;
}
void showAStudent(SinhVien &sv)
{
    cout << left << setw(10) << sv.masv
         << setw(20) << sv.ho_ten
         << setw(20) << sv.tuoi
         << setw(10) << sv.diem_tb << endl;
}
void output(TRO &L)
{
    cout << "===================================" << endl;
    cout << "        Danh sach sinh vien        " << endl;
    cout << "===================================" << endl;

    cout << left << setw(10) << "Ma Sv"
         << setw(20) << "Ho Ten"
         << setw(20) << "Tuoi"
         << setw(10) << "Diem trung binh" << endl;
    while (L != nullptr)
    {
        /* code */
        showAStudent(L->sv);
        L = L->next;
    }
}
int main()
{
    TRO l = nullptr;
    int n;
    cout << "Nhap so luong sinh vien: " << endl;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "Sinh vien: " << i + 1 << endl;
        SinhVien sv;
        createAStudent(sv);
        addNode(l, sv);
    }
    output(l);
    return 0;
}