#include <bits/stdc++.h>

using namespace std;

int a[1004];
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;    cin >> n;
    int sum = 0;

    for(int i = 0 ; i < n ;i++) cin >> a[i];
    sort(a, a+n);
    
    for(int i=0 ; i < n ; i++){
        sum += a[i] * (n-i); 
    }
    cout << sum ;
   
}