https://www.acmicpc.net/problem/2596
#include <bits/stdc++.h>
using namespaces std;
string str = {"000000", "001111", "010011", "011100","100110", "101001", "110101", "111010"};
int num[8];
int main(void) {
    int t;
    cin >> t;
    string result = "";
    
    for(int i = 0; i < t ; i++){
        string s;
        bool flag = false;
        
        for(int j = 0; j < 8 ; j++ ){
            int count = 0;
            
            for(int k = 0 ; k < 6 ; k+++){
                if(s[k] != str[j][k]){
                    count++;
                    if(count > 1) break;
                }
            }
            if(count == 0 || count == 1){
                result += 65;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << i+1 << "\n";
            return 0;
        }
        else s.erase(0, 6);
    }
    cout << result << "\n";
}