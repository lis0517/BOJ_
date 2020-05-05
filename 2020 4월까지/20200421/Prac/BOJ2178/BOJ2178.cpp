// BOJ2178.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int board[10005][100];
int vx[] = { 1,-1,0,0 };
int vy[] = { 0,0,1,-1 };

int main()
{
    int width = 0, height = 0;
    
    cin >> height;
    cin >> width;

    vector<string> board_map;

    for (int h = 0; h < height; ++h)
    {
        fill(board[h], board[h] + width, -1);
    }
    

    cin.ignore();
    for (int h = 0; h < height; ++h)
    {
        string s;
        getline(cin, s);
        board_map.push_back(s);
    }

    queue<int> queueX;
    queue<int> queueY;
    int min_walk = 0;
    queueX.push(0);
    queueY.push(0);
    board[0][0] = 1;
    while (queueX.size() > 0)
    {
        int x = queueX.front(), y = queueY.front();
        queueX.pop(); queueY.pop();

        for (int i = 0; i < 4; ++i)
        {
            int nx = x + vx[i], ny = y + vy[i];

            if (nx >= 0 && ny >= 0 && nx < width && ny < height &&
                board[ny][nx] == -1 && board_map[ny][nx] == '1')
            {
                board[ny][nx] = board[y][x] + 1;
                queueX.push(nx);
                queueY.push(ny);
                if (nx == width - 1 && ny == height - 1)
                {
                    min_walk = board[ny][nx];
                }
            }
        }
    }

    cout << min_walk << '\n';
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
