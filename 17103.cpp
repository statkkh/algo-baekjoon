// ! https://www.acmicpc.net/problem/17103


#include <bits/stdc++.h>
using namespace std;

const int m = 1'000'000;

vector<bool> state(m+1, false);
void solve(){
    for (long long i=2 ; i*i<= m;i++ ) {
        if(state[i]) continue;

        for (long long j=i*i; j <= m ; j+=i ) {
            if(state[j]) continue;
            state[j] = true;
        }

    }
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    
    int k;
    cin >> k;
    solve();
    while(k--){
        int count = 0;
        int num;
        cin >> num;
        for (int i=2; i<=num/2 ; i++ ) {
            if(!state[i]  && !state[num-i]){
                count++;
            }
        }
        cout << count << endl;
    }
    
}