// n_1926.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <queue>
using namespace std;

int vx[] = { 1,-1,0,0 };
int vy[] = { 0,0,1,-1 };

int main()
{
    int w = 5, h = 6;
    int a[6][5] = { {1,1,0,1,1},{0,1,1,0,0},{0,0,0,0,0},{1,0,1,1,1},{0,0,1,1,1},{0,0,1,1,1} };
    int visit[6][5];
    fill(visit[0], visit[0] + (6 * 5), 0);
    queue<pair<int, int>> Q;
    int draw_count = 0;
    int big_size = 0;
    for (int y = 0; y < h; ++y)
    {
        for (int x = 0; x < w; ++x)
        {
            if (visit[y][x] == 0 && a[y][x] == 1)
            {
                Q.push(make_pair(x, y));
                draw_count++;
                visit[y][x] = 1;
                int temp_size = 0;
                while (Q.size() > 0)
                {
                    pair<int, int> p = Q.front();
                    Q.pop();
                    temp_size++;
                    for (int i = 0; i < 4; ++i)
                    {
                        int nx = p.first + vx[i];
                        int ny = p.second + vy[i];
                        if (nx < 0 || ny < 0 || nx >= w || ny >= h) continue;
                        if (visit[ny][nx] == 1 || a[ny][nx] == 0) continue;
                        Q.push(make_pair(nx, ny));
                        visit[ny][nx] = 1;
                    }
                }
                big_size = max(temp_size, big_size);
            }
        }
    }
    cout << draw_count << "\n" << big_size;
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
