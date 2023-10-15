// https://luv-n-interest.tistory.com/918
#include <bits/stdc++.h>
using namespace std;
string target[8] = {"TTT","TTH","THT","THH", "HTT","HTH","HHT","HHH"};
int num[8];

int main() {
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;

        for(int i = 0 ; i < 38 ; i++){
            string str ;
            str = str + s[i] + s[i+1] +s[i+2];

            for(int j = 0 ; j < 8 ; j++){
                if(str == target[j]){
                    num[j]++;                    
                }
            }    
        }
        
        for(int i = 0 ; i < 8 ; i++){
            cout << num[i] << " ";
        }
        cout << "\n";
        fill(num , num+8 , 0);        
    }
}