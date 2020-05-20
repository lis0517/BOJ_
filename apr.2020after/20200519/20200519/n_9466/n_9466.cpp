// n_9466.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stack>
#include <vector>
#pragma warning(disable:4996)
using namespace std;

vector<int> visit;
stack<pair<int, int>> st;
int solution(vector<int> arr, int n)
{
    visit.clear();
    visit.resize(n+2, 0);
    int ans = n;
    int teamcount = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (visit[i] == 0)
        {
            int idx = 1;
            int temp = 0;
            st.push({ idx, i });
            visit[i] = idx;
            while (st.size() > 0)
            {
                pair<int, int> curr = st.top();
                idx++;
                if (visit[arr[curr.second]] != 0)
                {
                    temp = arr[curr.second];
                    break;
                }
                visit[arr[curr.second]] = idx;
                st.push({ idx, arr[curr.second] });
            }
            
            
            while (st.size() > 0)
            {
                pair<int, int> t = st.top();
                if (t.second == temp)
                {
                    teamcount += idx - t.first;
                }
                st.pop();
            }
        }

    }
    return ans-teamcount;
}

int main()
{
    int lp = 0;
    scanf("%d", &lp);
    while (lp--)
    {
        int n = 0;
        scanf("%d", &n);
        vector<int> arr;
        arr.push_back(0);
        for(int i=0; i < n; ++i)
        {
            int m = 0;
            scanf("%d", &m);
            arr.push_back(m);
        }
        printf("%d\n",solution(arr, n));
    }
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
