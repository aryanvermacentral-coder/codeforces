#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b;
    cin >> a >> b;
    int count = 0;
    if (1 <= a && a <= b && b <= 10){
        while(b>=a) 
        {
          a = a*3;
          b = b*2;
          count++;
        }
        cout << count;
    }
    else
    {
        cout << "Error in weights";
    }
    
}