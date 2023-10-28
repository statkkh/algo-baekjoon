#include <bits/stdc++.h>
using namespace std;
int n,value;
int main() {
    scanf("%d",&n);
    bool flag = true;
    
    for(int i=n; i>=4; i--){
        value = i;
        while(value){
            if(value%10 != 4 && value%10 != 7){
                flag = false;
                break;
            }
            value/=10;            
        }
        if(flag){
            printf("%d", i);
            break;
        }
        flag = true;
    }

}