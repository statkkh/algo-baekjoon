// https://www.acmicpc.net/problem/2693
#include <bits/stdc++.h>
using namespace std;

int main() {

    int k[10];
    int t;
    cin >> t;
    while(t--){
        for(int i = 0 ; i < 10 ; i++){
            cin  >> k[i];
        }

        sort(k , k + 10, greater<int>());
        cout << k[2] << '\n';
        memset(k, 0 ,10*sizeof(int));
    }

