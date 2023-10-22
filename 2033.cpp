#include <bits/stdc++>
using namespace std;


int main() {

    int n, m = 10 , t;
    cin >> n;
    while(n > m){
        t = n % m;
        n -= t;
        if(t >= 5 *(m/10))
            n += m;
        m*= 10;
    }

    cout << n;
}