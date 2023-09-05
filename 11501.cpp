#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    vector<int>v;
    int res;
    cin >> res;
    while(res--){
        int n = 0;
        long long sum = 0;       
        cin >> n;
        for ( int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            v.push_back(num);
        }

        int mx = 0;

        for (int i = n-1; i >= 0; i--)
        {
            if( mx >= v[i]){
                sum += mx - v[i];
            }else{
              mx = v[i];
            }
        }
        
        cout << sum << '\n';
        v.clear();
        
    }
    return 0;
}