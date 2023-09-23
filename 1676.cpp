#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false); 

    int n;
    
    scanf("%d", &n);
    int count = 0;
    for(int i=5 ; i<= n; i*=5){
        count += n/i;
    }
    

    printf("%d",count);
    return 0;
}