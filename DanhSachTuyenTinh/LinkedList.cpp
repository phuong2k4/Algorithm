#include<bits/stdc++.h>

using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val() , next(nullptr){};
    ListNode(int x) : val(x), next(nullptr){};
    ListNode(int x, ListNode* next) : val(x) , next(next){};
};

// another example..

struct SinhVien{
    string masv;
    string namesv;
    int tuoi;
    double diemtb;
};

struct Node{
    SinhVien sv;
    Node *next;
};

struct DanhSach{
    Node *head;
};

void create(DanhSach &DS){
    DS.head = nullptr;
}

bool is_empty(DanhSach &DS){
    return DS.head == nullptr;
}

void add_first(DanhSach &DS, SinhVien &sv){
    Node *p = new Node;
    p->sv = sv;
    p->next = DS.head;
    DS.head = p;
}

void add_last(DanhSach &ds, SinhVien &sv){
    Node *p = new Node;
    p->sv = sv;
    p->next = nullptr;

    if (ds.head == nullptr){
        ds.head = p;
        return;
    }

    Node *q = ds.head;
    while (q->next != nullptr)
    {
        q= q->next;
    }
    q->next = p;
}

void remove_first(DanhSach &ds){
    if(ds.head == nullptr) return;
    Node *p = ds.head;
    ds.head = ds.head->next;
    delete p;
}