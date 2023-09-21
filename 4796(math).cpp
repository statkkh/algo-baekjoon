#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);    
    cout.tie(0);   

    int n, maxUse = 0, mx=0;
    cin >> n;
    mx = (n%8) > 5 ? 5 : n%8;
    maxUse = (n/8)*5 + mx;
    cout << maxUse << endl;
    
    return 0;
}
