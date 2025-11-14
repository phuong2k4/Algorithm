#include <bits/stdc++.h>

using namespace std;

int ucln(int a, int b)
{
    if (a % b == 0)
        return b;
    return ucln(b,a%b);
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout <<  ucln(a,b);
    return 0;
}
