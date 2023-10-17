// https://www.acmicpc.net/problem/2435
#include <bits/stdc++.h>
using namespace std;

int num[101];

int main(){
    // 연속적인 며칠 동안의 온도의 합이 가장 큰 값

    int n, k;
    cin >> n >> k;
    
    for(int i=1; i<= n; i++){
        cin >> num[i];
    }

    

    int mxsum = num[1], mx = 0;
    int count = 1;
    for(int i = 2; i <= 10 ; i++){

        mxsum = max(num[i],mxsum + num[i]);
        count++;
        if(mxsum == num[i]){
            count = 1;
        }

        if(count == k){
            mx = mxsum;
            count = 0;
        }        
    }

    cout << mx; 

}