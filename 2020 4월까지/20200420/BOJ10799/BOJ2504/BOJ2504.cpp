// BOJ2504.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int stackLoop(stack<string>& stack, string pass, string notPass, int value)
{
    int result = 0;
    while (stack.size() > 0)
    {
        string c = stack.top();
        stack.pop();
        if (c == pass)
        {
            result *= value;
            stack.push(to_string(result));
            break;
        }
        else if (c == notPass)
        {
            result = 0;
            break;
        }
        else
        {
            result += atoi(c.c_str());
        }
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    stack<string> CS;
    int N = s.size();
    int result = 1;
    for (int i = 0; i < N; ++i)
    {
        if (result == 0)
        {
            break;
        }
        if (s[i] == '(')
        {
            CS.push("(");
        }
        else if (s[i] == '[')
        {
            CS.push("[");
        }
        else
        {
            if (CS.empty()) 
            {
                result = 0;
                break;
            }
            else if (s[i] == ')')
            {
                if (CS.top() == "(")
                {
                    CS.pop();
                    CS.push("2");
                }
                else 
                {
                    result = stackLoop(CS, "(", "[", 2);
                }
            }
            else
            {
                if (CS.top() == "[")
                {
                    CS.pop();
                    CS.push("3");
                }
                else
                {
                    result = stackLoop(CS, "[", "(", 3);
                }
            }
        }
    }

    if (result == 0)
    {
        cout << result << '\n';
    }
    else 
    {
        int sum = 0;
        bool flag = false;
        while (CS.size() > 0)
        {
            string c = CS.top();
            CS.pop();
            if (c == "(" || c == "[" || c == ")" || c == "]")
            {
                flag = true;
                cout << 0 << '\n';
                break;
            }
            sum += atoi(c.c_str());
        }
        if(!flag)
            cout << sum << '\n';
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
