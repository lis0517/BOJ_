// n_2178.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int vx[] = { 1,-1,0,0 };
int vy[] = { 0,0,1,-1 };
int board[105][105];
int visit[105][105];

int solution(vector<vector<int>> maze, int n, int m)
{
    fill(board[0], board[0] + (105 * 105), 0);
    fill(visit[0], visit[0] + (105 * 105), 0);

    queue<pair<int, int>> Q;
    Q.push({ 0,0 });
    visit[0][0] = 1;
    board[0][0] = 1;
    while (Q.size() > 0)
    {
        pair<int, int> p = Q.front();
        Q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int nx = p.first + vx[i], ny = p.second + vy[i];
            if (nx < 0 || ny < 0 || nx >= m || ny >= n) continue;
            if (visit[ny][nx] == 1 || maze[ny][nx] == 0) continue;
            board[ny][nx] = board[p.second][p.first] + 1;
            Q.push({ nx,ny });
            visit[ny][nx] = 1;
        }
    }
    return board[n - 1][m - 1];
}

int main()
{
    vector<vector<int>> v1 = { {1,0,1,1,1,1},{1,0,1,0,1,0},{1,0,1,0,1,1},{1,1,1,0,1,1} };
    cout << solution(v1, 4, 6) << "\n";
    vector<vector<int>> v2 = { {1,1,0,1,1,0},{1,1,0,1,1,0},{1,1,1,1,1,1},{1,1,1,1,0,1} };
    cout << solution(v2, 4, 6) << "\n";
    vector<vector<int>> v3 = { {1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1},{1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1} };
    cout << solution(v3, 2, 25) << "\n";
    vector<vector<int>> v4 = { {1,0,1,1,1,1,1},{1,1,1,0,0,0,1},{1,0,0,0,0,0,1},{1,0,0,0,0,0,1},{1,0,0,0,0,0,1},{1,0,0,0,0,0,1},{1,1,1,1,1,1,1} };
    cout << solution(v4, 7,7) << "\n";
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
