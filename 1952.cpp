#include <bits/stdc++.h>
using namespace std;


int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int cx,cy,nx,ny;
int m,n;
int map[101][101];
int main() {
    cin >> m >> n;
    cx=0, cy=0;
    map[cx][cy] = 1;
    int count = 0;
    int move = 1;
    int dir=0;
    
    while(true){
            
        if(move == n*m) break;
        
        nx = cx + dx[dir];
        ny = cy + dy[dir];
        // 이동할 수 없는 경우//
        if(map[nx][ny] && nx< 0 && ny< 0 && nx >=n && ny >=m ){
            count++;
            // 위쪽 방향에서 오른쪽 방향 //
            if(dir == 3){
                dir = 0;
            }
            dir++;
        }else{
            move++;
            // 다음지점이동시 현재 지점
            x = dx;
            y = dy;
        }
    }
    cout << count;
}