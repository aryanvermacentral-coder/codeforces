#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    int t = 0;
    int r;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++)
    {
        t = t + i*k;
    }
    r = t - n;
    if(r>0)
    {
        cout << r;
    }
    else
    {
        cout << "0";
    }
}