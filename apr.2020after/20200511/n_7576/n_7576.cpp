// n_7576.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int board[1005][1005];
int visit[1005][1005];
int vx[] = { 1,-1,0,0 };
int vy[] = { 0,0,1,-1 };

int solution(vector<vector<int>> map, int m, int n)
{
    fill(board[0], board[0] + (1005 * 1005), 0);
    fill(visit[0], visit[0] + (1005 * 1005), 0);

    queue<pair<int, int>> Q;
    int empty_count = 0;
    for (int y = 0; y < n; ++y)
    {
        for (int x = 0; x < m; ++x)
        {
            if (map[y][x] == 1) { Q.push({ x,y }); visit[y][x] = 1; }
            else if (map[y][x] == 0) empty_count++;
        }
    }
    if (empty_count == 0) return 0;

    while (Q.size() > 0)
    {
        pair<int, int> p = Q.front();
        Q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int nx = p.first + vx[i], ny = p.second + vy[i];
            if (nx < 0 || ny < 0 || nx >= m || ny >= n)continue;
            if (map[ny][nx] == 1 || map[ny][nx] == -1 || visit[ny][nx] == 1) continue;
            Q.push({ nx,ny });
            visit[ny][nx] = 1;
            board[ny][nx] = board[p.second][p.first] + 1;
        }
    }

    int ans = 0;

    for (int y = 0; y < n; ++y)
    {
        for (int x = 0; x < m; ++x)
        {
            if (visit[y][x] == 0 && map[y][x] == 0) return -1;
            ans = max(board[y][x], ans);
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m = 0, n = 0;
    cin >> m >> n;
    vector<vector<int>> map(n, vector<int>(m, 0));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> map[i][j];
        }
    }
    cout << solution(map, m, n) << "\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
