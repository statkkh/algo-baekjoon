#include<bits/stdc++.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    int share = 2;
 
    while(n != 1){
        while(!(n%share)){
            cout << share << endl;
            n/=share;
        }
        share++;
        
    }


}

