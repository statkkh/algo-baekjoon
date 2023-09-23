#include <bits/stdc++.h>
using namespace std;

int main(void) {

    ios::sync_with_stdio(0);
    cin.tie(0);    
    cout.tie(0);   

    int count =  1;
    while(1){

        int l,p,v;
        cin >> l >> p >> v;
        if(v==0) break;
        
        int mx = min( (v % p) , l );
        int maxUse = (v/p)*l + mx;
        cout << "Case " << count++ << ": " << maxUse << "\n";
        
    }
    
}
