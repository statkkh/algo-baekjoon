#include <bits/stdc++.h>
using namespace std;

// https://www.acmicpc.net/problem/2869
int main(void) {
    
    int a , b, v;
    cin >> a >> b >> v;
    int h = (v-b) / (a-b);
    if( (v-b) % (a-b) == 0 ) cout << h;
    else cout << ++h;
    
}
