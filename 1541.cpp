#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int sum = 0;
    
    string s;
    cin >> s;

    bool flag = false;

    for(int i = 0 ; i <= s.length() ; i++){
        int tmp;
        if(s[i] == '-' || s[i] == '+' || i == s.length()){

            if(flag){
                sum += tmp *-1;
                tmp = 0;
            }else{
                sum += tmp;
                tmp = 0;
                
                if(s[i] == '-'){
                    flag = true;
                }                
            }
  
        }

        if(isdigit(s[i])){
            tmp*=10;
            tmp += s[i] - '0';
        }
    }
    
    cout << sum;
}