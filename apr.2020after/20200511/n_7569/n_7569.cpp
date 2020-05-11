// n_7569.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;

int board[102][102][102];

int vx[] = { 1,-1,0,0,0,0 };
int vy[] = { 0,0,1,-1,0,0 };
int vz[] = { 0,0,0,0,1,-1 };

int solution(vector<vector<vector<int>>> map, int m, int n, int h)
{
    fill(board[0][0], board[0][0] + (102 * 102 * 102), 0);
    queue<tuple<int, int, int>> Q;
    int empty_count = 0;
    for (int z = 0; z < h; ++z)
    {
        for (int y = 0; y < n; ++y)
        {
            for (int x = 0; x < m; ++x)
            {
                if (map[z][y][x] == 1) {
                    Q.push(make_tuple(x, y, z));
                }
                else if (map[z][y][x] == 0)
                {
                    empty_count++;
                    board[z][y][x] = -1;
                }
            }
        }
    }
    if (empty_count == 0) return 0;

    while (Q.size() > 0)
    {
        tuple<int, int, int> curr = Q.front(); Q.pop();
        int x = get<0>(curr), y = get<1>(curr), z = get<2>(curr);
        for (int i = 0; i < 6; ++i)
        {
            int nx = x + vx[i], ny = y + vy[i], nz = z + vz[i];
            if (nx < 0 || ny < 0 || nz < 0 || nx >= m || ny >= n || nz >= h)continue;
            if (board[nz][ny][nx] >= 0) continue;
            Q.push(make_tuple(nx, ny, nz));
            board[nz][ny][nx] = board[z][y][x] + 1;
        }
    }

    int ans = 0;
    for (int z = 0; z < h; ++z)
    {
        for (int y = 0; y < n; ++y)
        {
            for (int x = 0; x < m; ++x)
            {
                if (board[z][y][x] == -1 && map[z][y][x] == 0) return -1;
                ans = max(board[z][y][x], ans);
            }
        }
    }
    return ans;
}

int main()
{
    int m = 0, n = 0, h = 0;
    cin >> m >> n >> h;

    vector<vector<vector<int>>> v(h, vector<vector<int>>(n, vector<int>(m, 0)));

    for (int z = 0; z < h; ++z)
    {
        for (int y = 0; y < n; ++y)
        {
            for (int x = 0; x < m; ++x)
            {
                cin >> v[z][y][x];
            }
        }
    }
    cout << solution(v, m, n, h) << "\n";
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
