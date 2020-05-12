#include <iostream>
#include <queue>
using namespace std;

int dir[100002];
int vx[] = { -1,1,2 };
int solution(int n, int k)
{
    fill(dir, dir + 100002, -1);

    queue<int> Q;
    Q.push(n);
    dir[n] = 0;
    while (Q.size() > 0)
    {
        int curr = Q.front(); Q.pop();
        for (int i = 0; i < 3; ++i)
        {
            int nx = (i == 2) ? curr * vx[i] : curr + vx[i];
            if (nx < 0 || nx > 100000) continue;
            if (dir[nx] != -1) continue;
            dir[nx] = dir[curr] + 1;
            if (nx == k) return dir[k];
            Q.push(nx);
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0, k = 0;
    cin >> n >> k;
    cout << solution(n, k) << "\n";
}