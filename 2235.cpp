#include <bits/stdc++.h>
using namespace std;

vector<int, int >> v;

int main() {

    int n;
    cin >> n;
    for(int i = 1 ; i <= n; i++){
        cin >> v[i].first >> v[i].second;
    }

    for(int i = 1; i <= n ; i++){
        xdist = v[i].first;
        xcost = v[i].second;
    
        for(int j = 1; j <= n; j++){
            if(i == j) continue;
            ydist = v[i].first;
            ycost = v[i].second;
            
            
        }
        
    }
    
    return 0;
}