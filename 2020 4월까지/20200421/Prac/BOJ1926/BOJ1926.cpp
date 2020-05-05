// BOJ1926.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

bool grid[505][505];

int vx[] = { 1,-1,0,0 };
int vy[] = { 0,0,1,-1 };

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    vector<string> map;

    int width = 0, height = 0;

    cin >> height;
    cin >> width;

    cin.ignore();
    for (int h = 0; h < height; ++h)
    {
        string a;
        getline(cin, a);
        a.erase(std::remove(a.begin(), a.end(), ' '), a.end());
        map.push_back(a);
    }

    queue<int> queueX;
    queue<int> queueY;
    int picture_count = 0;
    int biggest_size = 0;
    for (int h = 0; h < height; ++h)
    {
        for (int w = 0; w < width; ++w)
        {
            if (grid[h][w] == false && map[h][w] == '1')
            {
                grid[h][w] = true;
                queueX.push(w);
                queueY.push(h);
                picture_count++;
                int current_size = 1;
                while (queueX.size() > 0)
                {
                    int x = queueX.front(), y = queueY.front();
                    queueX.pop(); queueY.pop();
                    for (int i = 0; i < 4; ++i)
                    {
                        int nx = x + vx[i], ny = y + vy[i];
                        if (nx >= 0 && ny >= 0 && nx < width && ny < height
                            && (!grid[ny][nx]) && map[ny][nx] == '1')
                        {
                            grid[ny][nx] = true;
                            queueX.push(nx);
                            queueY.push(ny);
                            current_size++;
                        }
                    }
                }
                biggest_size = max(biggest_size, current_size);
            }
        }
    }

    cout << picture_count << '\n';
    cout << biggest_size << '\n';
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
