#include<algorithm>
#include<conio.h>
#include<iostream>

using namespace std;

int insertion(int a[],int n)
{
    for(int i=1;i<n;i++){
        int x = a[i];
        int j = i-1;
        while (j >=0 && x < a[j] )
        {
            a[j + 1]=a[j];
            --j;
        }
        a[j + 1] = x;
    }
    return 0;
}

int main(){
    int n,a[1000];
    cin>>n;
    for (int i = 0;i<n;i++){
        cin >> a[i];
    }
    insertion(a,n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";

    }
    
    getch();
    return 0; 

}