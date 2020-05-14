// Infix2Postfix.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

string infix2Postfix(string infixExpression)
{
    string postExpression;
    stack<char> st;

    for (auto c : infixExpression)
    {
        switch (c)
        {
        case '(':
            st.push(c);
            break;
        case ')':
            while (st.top() != '(')
            {
                postExpression.push_back(st.top());
                st.pop();
            }
            st.pop();
            break;
        case '+':
        case '-':
            //+와 -는 (를 제외하고 *, /를 스택에서 꺼낼 수 있습니다.
            while (st.size() > 0 && st.top() != '(')
            {
                postExpression.push_back(st.top());
                st.pop();
            }
            st.push(c);
            break;
        case '*':
        case '/':
            //*와 /는 자신보다 높은 연산자가 없습니다.
            //=+,-를 만나기 전까지 *와 /를 꺼낸 뒤 자신을 집어넣습니다.
            while (st.size() > 0 && (st.top() == '*' || st.top() == '/'))
            {
                postExpression.push_back(st.top());
                st.pop();
            }
            st.push(c);
            break;
        default:
            postExpression.push_back(c);
            break;
        }
    }
    //남은 연산자를 모두 더해줍니다.
    while (st.size() > 0)
    {
        postExpression.push_back(st.top());
        st.pop();
    }
    return postExpression;
}

bool isOperator(char c)
{
    return (c == '*' || c == '-' || c == '+' || c == '/');
}

double postExpressCaculator(string postExpress)
{
    vector<double> temp;
    //C++11 이하에서는 iterator나 인덱스로 접근
    for (auto c : postExpress)
    {
        if (isOperator(c))
        {
            //숫자 배열에서 뒤에 있는 것을 가져오고 제거함
            double a = temp.back(); temp.pop_back();
            double b = temp.back(); temp.pop_back();
            switch (c)
            {
            case '+':
                temp.push_back(a + b);
                break;
            case '-':
                temp.push_back(a - b);
                break;
            case '*':
                temp.push_back(a * b);
                break;
            case '/':
                temp.push_back(a / b);
                break;
            }
        }
        else {
            char i = c - '0';
            temp.push_back(i);
        }
    }
    return temp[0];
}


int main()
{
    string s = "1+2/3-(4+5)*6";
    string post = infix2Postfix(s);
    cout << post << "\n";
    cout << postExpressCaculator(post) << "\n";
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
