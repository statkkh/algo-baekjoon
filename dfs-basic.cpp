#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[502][502] = 
{{1,1,1,0,1,0,0,0,0,0},
 {1,0,0,0,1,0,0,0,0,0},
 {1,1,1,0,1,0,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0} };
bool vis[502][502];
int n = 7 , m = 10;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);    

    int dx[4] = {1, 0, -1, 0};
    int dx[4] = {0, 1, 0, -1};  

    stack<pair<int, int >> s;
    vis[0][0] = 1;
    s.push({0,0});
    while(!s.empty()){
        pair<int, int > cur = s.top();s.pop();
        cout << '(' << cur.X << " , " << cur.Y << ") ->";
        for(int dir = 0 ; dir < 4 ; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >=n || ny < 0 ny>=m) continue;
            if(vis[nx][ny] || board[nx][ny]!=1)  continue;
            vis[nx][ny] = 1;
            s.push({nx,ny});
        }
    }

}