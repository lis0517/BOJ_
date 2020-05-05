#include <iostream>
#include <vector>

using namespace std;

int n, m;


void solution(vector<int>& a, vector<bool>& u, int k)
{
    if (k == m)
    {
        for (int i = 0; i < a.size(); ++i)
        {
            cout << a[i] + 1 << ' ';
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        if (!u[i])
        {
            u[i] = true;
            a[k] = i;
            solution(a, u, k + 1);
            u[i] = false;
        }
    }
}

int main()
{
    cin.tie(0);
    cin >> n;
    cin >> m;
    vector<int> arr;
    vector<bool> use;
    arr.assign(m, 0);
    use.assign(n, false);
    solution(arr, use, 0);
}
