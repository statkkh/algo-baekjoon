// https://www.acmicpc.net/problem/2246 검토 필요
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int >> v;
int xdist, ydist, xcost, ycost, cnt, can;
int main() {

    int n;
    cin >> n;
    v.resize(n);
    
    for(int i = 0 ; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    for(int i = 0; i < n ; i++){
        can = 1;
        xdist = v[i].first;
        xcost = v[i].second;

        for(int j = 0; j < n; j++){
            if(i == j) continue;
            ydist = v[j].first;
            ycost = v[j].second;

            if(xdist >= ydist && xcost >= ycost){
                can = 0;
                break;
            }         
            if(xcost >= ycost && xdist >= ydist){
                can = 0;
                break;
            }
        }
        
        if(can){ 
            cnt++;
        }
        
    }
        
    cout << cnt;
}