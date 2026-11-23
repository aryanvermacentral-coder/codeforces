#include<iostream>
#include<vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int>xx(n);vector<int>yy(n);vector<int>zz(n);
    while(n--) {
        int x,y,z;cin>>x>>y>>z;
        xx.emplace_back(x);yy.emplace_back(y);zz.emplace_back(z);
    }
    int sum1,sum2,sum3;
    for(int i=0;i<n;i++){
        sum1+=xx[i];
    }
    for(int i=0;i<n;i++){
        sum2+=yy[i];
    }
    for(int i=0;i<n;i++){
        sum3+=zz[i];
    }
    if(sum1 == 0 && sum2 == 0 && sum3 == 0) cout << "YES";
    else cout << "NO";
}