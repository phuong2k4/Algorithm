// de quy tuong ho
// khong goi lai thong qua chinh no ma goi lai qua ham khac
#include<iostream>
using namespace std;

bool isEven(int n);
bool isOdd(int n);


bool isEven(int n){
    if(n==0)
        return true;
    else
        return isOdd(n-1);
}
bool isOdd(int n){
    return !isEven(n);
}
// rt:1 = true // rt:0 = false
int main(int argc, char* argv[]){
    int n;
    cin >> n;
    cout << isEven(n);
    return 0;
}