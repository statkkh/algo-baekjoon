#include <iostream>
using namespace std;

// ! https://www.acmicpc.net/problem/2839

int main() {
        
	ios::sync_with_stdio(false);
	cin.tie(NULL);    

    int n;
    cin >> n;
    int cnt = 0;
    while(n >= 0){

        if(n%5==0){
            cnt += n/5;
            cout << cnt;
            return 0;
        }

        n-=3;
        cnt++;
        
    }
    cout << -1;
    
}