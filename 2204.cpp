// https://www.acmicpc.net/problem/2204
#include <bits/stdc++.h>
using namespace std;

vector<pair<string, int>>v , v1;
int main() {

    int n;        
    while(1){
        
        cin >> n;
        if(!n) break;

        for (int i=0; i < n;i++) {
            string a;cin >> a;
            v.push_back({a,i});
            for(int i = 0 ; i < a.size() ; i++){
                if(isupper(a[i]) ){
                    a[i] = tolower(a[i]);
                }    
            }                 
            v1.push_back({a,i});            
        }
        
        sort(v1.begin(), v1.end());

        for(int i = 0; i < v.size() ; i++ ){
            if(v[i].second == v1[0].second){
                cout << v[i].first << endl;
                break;
            }
        }

        v.clear();
        v1.clear();
                
    }

}