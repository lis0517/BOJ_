
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> map;

void solution(string& s, int x, int y, int n)
{
    string temp;
    if (n == 1)
    {
        s.push_back(map[y][x]);
        return;
    }

    int div = n / 2;
    temp.push_back('(');
    solution(temp, x, y, div);
    solution(temp, x + div, y, div);
    solution(temp, x, y + div, div);
    solution(temp, x + div, y + div, div);
    temp.push_back(')');
    if (temp == "(0000)")
    {
        s.push_back('0');
    }
    else if (temp == "(1111)")
    {
        s.push_back('1');
    }
    else 
    {
        s.append(temp);
    }
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

    string ans;
    solution(ans, 0, 0, n);
    cout << ans;
}