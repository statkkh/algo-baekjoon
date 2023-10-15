// 두개의 단어가 같은 위치 찾기
// https://www.acmicpc.net/problem/2804
#include <bits/stdc++.h>

using namespace std;

int main(){

    string a, b;

    int idx_a , idx_b;

    cin >> a >> b;
    bool flag = true;
    for(int i = 0 ; i < a.length() ; i++){
        
        for(int j = 0 ; j < b.length() ; j++ ){
            if( a[i] == b[j]){
                idx_a = i;
                idx_b = j;
                flag = false;
                break;
            }
        }
        if(!flag){
            break;
        }
    }

    // idx_a = 1 , idx_b = 4
    for(int j = 0 ; j < b.length() ; j++ ){
        if(j == idx_b){
            cout << a ;
            cout << '\n';
            continue;
        }
        for(int i = 0 ; i < a.length(); i++){
            if( i == idx_a){
                cout << b[j];
            }else{
                cout << ".";
            }
        }
        cout << '\n';
    }
}