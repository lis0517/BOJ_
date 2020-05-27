﻿// n_2579.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
using namespace std;
int dp[305][2];
int main()
{
    int n = 0;
    cin >> n;

    int * arr = new int[n + 1];
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }
    dp[1][0] = arr[1];
    dp[1][1] = 0;
    dp[2][0] = dp[1][0];
    dp[2][1] = arr[1] + arr[2];

    for (int i = 3; i <= n; ++i)
    {
        dp[i][0] = max(dp[i - 2][0] , dp[i - 2][1]) + arr[i];
        dp[i][1] = dp[i - 1][0] + arr[i];
    }
    cout << max(dp[n][0], dp[n][1]) << "\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴
/*cin.tie(0);
    ios::sync_with_stdio(0);
    int n = 0;
    cin >> n;

    
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }

    dp[1] = arr[1];
    dp[2] = max(arr[2], arr[1] + arr[2]);
    for (int i = 3; i <= n; ++i)
    {
        if(i > 2) dp[i] = max(dp[i], dp[i-2] + arr[i]);
        if (i > 3) dp[i] = max(dp[i],  arr[i-1] + arr[i] + dp[i-3]);
    }

    cout << dp[n] << "\n";*/
// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
