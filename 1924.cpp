#include <bits/stdc++.h>
#include <vector>
using namespace std;
int month, day,totalday;
bool present;
int main() {
    ios_base::sync_with_stdio(false);

    scanf("%d %d", &month, &day);

    string days[7] = {"MON", "TUE","WED","THU","FRI", "SAT", "SUN"};
    int monthlist[6] = {1, 3, 5, 7, 8, 10}; //31   
       
    totalday += (day-1);
    
    for(int i = 1;  i < month ; i++){
        present = count(begin(monthlist), end(monthlist), i) > 0;
        
        if(i==2){ 
            totalday += 28;
            continue;
        }
        if(present){ 
            totalday += 31;    
            continue;
        }    
        
        totalday += 30;
    }
    
    totalday %= 7;
    
    cout << days[totalday];
}