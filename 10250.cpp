// !https://www.acmicpc.net/problem/10250
// !https://github.com/encrypted-def/basic-algo-lecture/blob/master/workbook/0x12.md

#include <bits/stdc++.h>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int k;
    cin >> k;
    while(k--){
        int h, w, n;        
        cin >> h >> w >> n;

        cout << ((n-1)%h + 1)*100 + ((n-1)/h + 1 ) << "\n";
        
    }


}