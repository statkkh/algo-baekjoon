#include <bits/stdc++.h>
using namespace std;

double value, sum,result;
int n;
int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(0);
    double mx = 0;
    cin >> n;

    for(int i = 1; i<=n ; i++){
        cin >> value;
        mx = max(mx, value);
        sum += value;
    }
    result = sum*100 /  (n*mx);
 
    cout << result;

}