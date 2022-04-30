#include <bits/stdc++.h>
using namespace std;
void printingsubarraysum(int a[], int n)
{
    int cs = 0;
    int ms = 0;
    for (int i = 0; i < n; i++)
    {
        cs = cs + a[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ms = max(ms, cs);
    }
    cout << ms;
}
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int n = sizeof(a) / sizeof(int);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << ",";
    }
    cout << endl;
    printingsubarraysum(a, n);

    return 0;
}
