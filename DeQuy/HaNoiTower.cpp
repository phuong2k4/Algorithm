// de quy nhi phan
#include<iostream>

using namespace std;

void towerSteps(int n,char A, char B, char C){
    if(n==1){
        cout << A << "==>" << C << endl;
    }
    else{
        towerSteps(n-1,A,C,B);
        cout << A <<"==>"<<C << endl;
        towerSteps(n-1,B,A,C);
    }
}

int main(int argc, char** argv[]){
    int n;
    cin >> n;
    towerSteps(n,'A','B','C');
}