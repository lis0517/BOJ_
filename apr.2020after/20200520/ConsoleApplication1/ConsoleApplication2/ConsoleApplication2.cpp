﻿// ConsoleApplication2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<string> dp;

    dp.resize(n+1);
    dp[1].push_back('0');
    for (int i = 2; i <= n; ++i)
    {
        dp[i].append(dp[i - 1]);
        dp[i].push_back('0');
        for (int j = dp[i - 1].size() - 1; j >= 0; --j)
        {
            if (dp[i - 1][j] == '0')
            {
                dp[i].push_back('1');
            }
            else 
            {
                dp[i].push_back('0');
            }
        }
    }

    for (size_t i = 0; i < dp[n].size(); ++i)
    {
        answer.push_back(dp[n][i] - '0');
    }

    return answer;
}

int main()
{
    vector<int> a = solution(5);

    for (size_t i = 0; i < a.size(); ++i)
    {
        cout << a[i] << ' ';
    }
    cout << "\n";
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
