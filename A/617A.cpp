#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, steps;
    cin >> n;
    steps = n/5;
    if( n%5 != 0 )
    {
        steps++;
    }
    cout << steps;
}
