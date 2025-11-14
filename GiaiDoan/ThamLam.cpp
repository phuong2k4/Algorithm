
#include <bits/stdc++.h>

using namespace std;

void quickSort(int a[], int l, int r)
{
    if(l > r)return;
    int i = l, j = r;
    int pivot = a[(l+r)/2];
    while(i<=j){
        while(a[i] > pivot) i++;
        while(a[j] < pivot) j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;j--;
        }
    }
    if(l < j) quickSort(a,l,j);
    if(r > i) quickSort(a,i,r);
}

int greedy(int a[], int n, int w)
{
    quickSort(a,0,n-1);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        while (w >= a[i])
        {
            w -= a[i];
            cout << "Dua to: " << a[i] << endl;
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int a[9] = {200, 10, 5, 1, 2, 20, 500, 100, 50};
    int length = sizeof(a) / sizeof(a[0]);
    int sotienvay;
    cin >> sotienvay;
    cout << greedy(a, length, sotienvay);
    return 0;
}