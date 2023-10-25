#include <bits/stdc++.h>
using namespace std;

int t,a,b,value;

int gcd(int x, int y){
    if(y==0) return x;
    return gcd(y , x%y);
}

int lcm(int x , int y){
    return x*y / gcd(x,y);
}

int main(void) {
    
    ios_base::sync_with_stdio(false);
    // cin.tie(0);
    
    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &a,&b);

        value = lcm(a,b);
        printf("%d\n", value);
    }
    
}