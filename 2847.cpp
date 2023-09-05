#include<bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
int v[101];
int n;

int main() {
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int cnt = 0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int mx = v[n-1];    
    for(int i = n-1 ; i >= 1 ; i--){
        if(v[i-1] >= v[i]){
            cnt += v[i-1] -v[i] + 1;
            v[i-1] = (v[i] - 1);
        }
    }
    cout << cnt;
    return 0;
}