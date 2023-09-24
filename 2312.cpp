
// ! https://www.acmicpc.net/problem/2312
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    for(int i=2; i*i <= n ; i++){
        int count = 0;
        while( n%i == 0){
            count++;
            n/=i;
        }
        if(count) cout << i << " " << count << "\n";
    } 
    if(n!=1) cout << n << " " << 1 << "\n"; 
}


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int k;
    cin >> k;
    
    while(k--){
        solve();
    }
    
    return 0;
}