// 1149.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
using namespace std;

int dp[1005][3];
int S[1005][3];
int main()
{
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> S[i][0] >> S[i][1] >> S[i][2];
    }

    dp[0][0] = S[0][0];
    dp[0][1] = S[0][1];
    dp[0][2] = S[0][2];
    for (int i = 1; i < n; ++i)
    {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + S[i][0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + S[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + S[i][2];
    }

    cout << min(min(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]);
}
