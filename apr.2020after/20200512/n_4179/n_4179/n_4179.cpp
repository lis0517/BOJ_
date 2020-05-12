// n_4179.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

int fire[1002][1002];//불 이동 시간
int man[1002][1002];//지훈 이동 시간
int vx[] = { 1,-1,0,0 };
int vy[] = { 0,0,1,-1 };
void solution(vector<string> map, int r, int c)
{
    fill(fire[0], fire[0] + (1002 * 1002), -1);
    fill(man[0], man[0] + (1002 * 1002), -1);

    queue<pair<int, int>> Q1;
    queue<pair<int, int>> Q2;
    for (int y = 0; y < c; ++y)
    {
        for (int x = 0; x < r; ++x)
        {
            if (map[y][x] == 'F')
            {
                Q1.push({ x,y });
                fire[y][x] = 0;
            }
            else if (map[y][x] == 'J')
            {
                Q2.push({ x,y });
                man[y][x] = 0;
            }
        }
    }
    
    while (Q1.size() > 0)
    {
        auto curr = Q1.front(); Q1.pop();
        int x = curr.first, y = curr.second;
        
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + vx[i], ny = y + vy[i];
            if (nx < 0 || ny < 0 || nx >= r || ny >= c)continue;
            if (fire[ny][nx] >= 0 || map[ny][nx] == '#') continue;
            fire[ny][nx] = fire[y][x] + 1;
            Q1.push({ nx,ny });
        }
    }

    while (Q2.size() > 0)
    {
        auto curr = Q2.front(); Q2.pop();
        int x = curr.first, y = curr.second;
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + vx[i], ny = y + vy[i];
            //탈출 성공
            if (nx < 0 || ny < 0 || nx >= r || ny >= c)
            {
                cout << man[y][x] + 1 << "\n";
                return;
            }
            if (map[ny][nx] == '#' || man[ny][nx] >= 0) continue;
            if (fire[ny][nx] != -1 && fire[ny][nx] <= man[y][x] + 1)continue;
            man[ny][nx] = man[y][x] + 1;
            Q2.push({ nx,ny });
        }
    }
    cout << "IMPOSSIBLE" << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r = 0, c = 0;
    cin >> c >> r;
    cin.ignore();
    vector<string> v;
    for (int i = 0; i < c; ++i)
    {
        string s;
        getline(cin, s);
        v.push_back(s);
    }
    solution(v, r, c);
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
