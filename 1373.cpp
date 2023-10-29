// https://www.acmicpc.net/status?user_id=daniel5319&problem_id=1373&from_mine=1
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    // string s;
    char s[1000000];
    cin >> s;
    // scanf("%s",s);
    int result;    
    int i = 0;
    if(s.length() % 3 == 2){
        result = (s[0]-'0')*2+(s[1]-'0')*1;
        cout << result ;
        // printf("%d", result);
        i = 2;
    }
    
    if( s.length() % 3 == 1){
        result = (s[0]-'0') ;
        cout << result;
        // printf("%d", result);        
        i = 1;
    }
    
    for(  ; i < s.length() ; i+=3){
        result = (s[i]-'0')*4+(s[i+1]-'0')*2+(s[i+2]-'0')*1 ;
        cout << result;
    }
    return 0;    
}