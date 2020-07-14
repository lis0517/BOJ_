// 20200703.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
#pragma warning(disable : 4996)
using namespace std;

void solution(int index, int n)
{
    string temp,q1,answer,end;

    for (int i = 0; i < 4 * index; ++i)
    {
        temp.append("_");
    }
    q1.append(temp.c_str());
    q1.append("\"재귀함수가 뭔가요?\"\n");
    printf("%s", q1.c_str());
    if (n == 0)
    {
        string baseCase;
        baseCase.append(temp.c_str());
        baseCase.append("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
        printf("%s", baseCase.c_str());
        end.append(temp.c_str());
        end.append("라고 답변하였지.\n");
        printf("%s", end.c_str());
        return;
    }
    answer.append(temp.c_str());
    answer.append("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
    answer.append(temp.c_str());
    answer.append("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
    answer.append(temp.c_str());
    answer.append("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
    printf("%s", answer.c_str());
    int next = index + 1;
    solution(next, n - 1);
    end.append(temp.c_str());
    end.append("라고 답변하였지.\n");
    printf("%s", end.c_str());
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
    solution(0, n);
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
