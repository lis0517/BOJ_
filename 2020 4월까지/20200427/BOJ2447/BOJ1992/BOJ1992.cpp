// BOJ1992.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

vector<string> map;

void innerLoop(stack<char>& s)
{
    string st;

    while (s.size() > 0)
    {
        char c = s.top();
        s.pop();
        if (c == '(')
        {
            st.insert(st.begin(), c);
            break;
        }
        else if (c == ')')
        {
            st.push_back(c);
        }
        else {
            st.insert(st.begin(), c);
        }
    }
    if (st == "(0000)")
    {
        s.push('0');
    }
    else if (st == "(1111)")
    {
        s.push('1');
    }
    else 
    {
        for (int i = 0; i < st.size(); ++i)
        {
            s.push(st[i]);
        }
    }
}

void solution(string &s, int x, int y, int n)
{
    if (n == 1)
    {
        s.push_back(map[y][x]);
        return;
    }

    int div = n / 2;
    s.push_back('(');
    solution(s, x, y, div);
    solution(s, x + div, y, div);
    solution(s, x, y + div, div);
    solution(s, x + div, y + div, div);
    s.push_back(')');
}

int main()
{
    int n = 0;
    cin.tie(0);
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i)
    {
        string c;
        getline(cin, c);
        map.push_back(c);
    }

    string temp;
    solution(temp, 0, 0, n);

    stack<char> S;
    for (int i = 0; i < temp.size(); ++i)
    {
        char c = temp[i];
        if (c == '(')
        {
            S.push(c);
        }
        else if (c == ')')
        {
            S.push(c);
            innerLoop(S);
        }
        else
        {
            S.push(c);
        }
    }
    innerLoop(S);
    string ans;
    while (S.size() > 0)
    {
        char c = S.top();
        S.pop();
        ans.insert(ans.begin(), c);
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
