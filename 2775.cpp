// https://solved.ac/problems/level/5
// https://www.acmicpc.net/problem/2775
#include <bits/stdc++.h>
using namespace std;
int dp[15][15];
int main() {

    int t;
    cin >> t;

    for (int i = 1; i <= 14 ; i++) {
        dp[0][i] = i;
    }
    for(int i = 0; i <= 14; i++){
        dp[i][1] = 1;
        for(int j = 1; j <= 14; j++){
            if( i == 0){  
                dp[0][j] = j;
                continue;
            }
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    while(t--){
        int k, n;
        cin >> k >> n;
        cout << dp[k][n] << "\n";
    }
    
}