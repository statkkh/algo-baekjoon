#include <bits/stdc++.h>
using namespace std;

const int m = 123456*2;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<bool>v(m,false);
 
    for(int i=2 ; i*i <= m ; i++){
        if(v[i]) continue;
        for(int j = i*i ;j <= m ; j += i ) {
            if(!v[j]){
                v[j]=true;
            }
        }
    }    
    
    
    while(1){
        int n;
        cin >> n;
        if(n==0) break;    
        
        int count = 0;
        for(int i = n+1 ; i <= 2*n ; i++){
            if(!v[i]) count++;
        }    
        cout << count << "\n";
   }
 
}

