#include <bits/stdc++.h>

using namespace std;

/*
4
0 85 26 81
85 0 77 97
26 77 0 26
81 97 26 0
*/

int sl_tp, tp[100][100], thutu_tp[100];
int tham_tp[100], chiphi = 0, chiphi_thapnhat = INT_MAX;

void nhap()
{
    cin >> sl_tp;
    for (int i = 1; i <= sl_tp; i++)
    {
        for (int j = 1; j <= sl_tp; j++)
        {
            cin >> tp[i][j];
        }
    }
    memset(tham_tp, 0, sizeof(tham_tp));
}

void ditham_tp(int thanhpho)
{
    for (int tp_next = 1; tp_next <= sl_tp; tp_next++)
    {
        if (tham_tp[tp_next] == 0)
        {
            tham_tp[tp_next] = 1;
            thutu_tp[thanhpho] = tp_next;
            chiphi += tp[thutu_tp[thanhpho - 1]][thutu_tp[thanhpho]];
            if (thanhpho == sl_tp)
            {
                chiphi_thapnhat = min(chiphi_thapnhat, chiphi + tp[sl_tp][1]);
            }
            else
            {
                ditham_tp(thanhpho + 1);
            }
            tham_tp[tp_next] = 0;
            chiphi -= tp[thutu_tp[thanhpho - 1]][thutu_tp[thanhpho]];
        }
    }
}

int main()
{
    nhap();
    thutu_tp[1] = 1;
    tham_tp[1] = 1;
    ditham_tp(2);
    cout << chiphi_thapnhat << endl;
    return 0;
}