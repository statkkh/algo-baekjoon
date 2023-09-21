#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);    
    cout.tie(0);

    int n = 0,mx = 0,index=0;
    cin >> n  >> mx;

    vector<bool>state(1001, true);

  for (int i=2; i<=n; i++){
    if (!state[i]) continue;
    for (int j=i; j<=n; j+=i){
      if (!state[j]) continue;
      state[j] = false;
      mx--;
      if (mx == 0){
        cout << j;
        return 0;
      }
    }
  }    
}