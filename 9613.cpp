#include <bits/stdc++.h>
using namespace std;

int arr[102];
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

    int t;
    cin >> t;
    
    while(t--){
        int k;
        cin >> k;

        for(int i = 0 ; i < k ; i++){
            cin >> arr[i];
        }
        long long sum = 0;
        for(int i = 1; i < k ; i++){

            for (int j = 0 ; j < i ; j++) {
                sum += gcd(arr[i], arr[j]);
            }
        }
        cout << sum << "\n";    
        
    }
    
}