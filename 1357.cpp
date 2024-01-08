
// https://www.acmicpc.net/problem/1357

#include <bits/stdc++.h>
using namespace std;
int a, b;
int rev(int n){
    
    int sum = 0;
    while(n){
        sum = sum*10 + n%10;
        n/=10;
    }
    return sum;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> a >> b;

    int result = 0;

    result = rev(rev(a) + rev(b));
    cout << result;
    return 0;
}