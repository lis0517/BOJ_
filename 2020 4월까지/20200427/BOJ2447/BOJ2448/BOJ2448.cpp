// BOJ2448.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char map[3080][6150];

void solution(int x, int y, int n)
{
    if (n == 3)
    {
        map[y][x] = '*';
        map[y + 1][x - 1] = '*';
        map[y + 1][x + 1] = '*';
        map[y + 2][x - 2] = '*';
        map[y + 2][x - 1] = '*';
        map[y + 2][x] = '*';
        map[y + 2][x + 1] = '*';
        map[y + 2][x + 2] = '*';
        return;
    }
    int div = n / 2;
    solution(x, y, div);
    solution(x - div, y + div, div);
    solution(x + div, y + div, div);
}


int main()
{
    fill(map[0], map[0] + (3080 * 6150), ' ');

    int n = 0;
    cin >> n;
    solution(n-1, 0, n);

    string ans;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n*2; ++j)
        {
            ans.push_back(map[i][j]);
        }
        ans.push_back('\n');
    }
    cout << ans;
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
