// n_15683.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

/*
4 6
0 0 0 0 0 0
0 0 0 0 0 0
0 0 1 0 6 0
0 0 0 0 0 0
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define X first 
#define Y second 
using namespace std;

int n, m;

int vx[4] = { 1,0,-1,0 };
int vy[4] = { 0,1,0,-1 };
int board1[10][10] =
{
    {0,0,0,0,0,0},
    {0,0,0,0,0,0},
    {0,0,1,0,6,0},
    {0,0,0,0,0,0}
};
int board2[10][10];
vector<pair<int, int>> cctv;

bool isOutBound(int x, int y)
{
    return (x < 0 || x >= n || y < 0 || y >= m);
}

//탐색
void search(int x, int y, int dir)
{
    dir %= 4;

    while (true)
    {
        x += vx[dir];
        y += vy[dir];
        if (isOutBound(x, y) || board1[x][y] == 6) return;
        if (board2[x][y] != 0) continue;
        board2[x][y] = 7;
    }
}

int main()
{
    cin >> n >> m;

    int nm = 0;
    //cin.ignore();
    /*for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> board1[i][j];
            if (board1[i][j] == 0) nm++;
            if (board1[i][j] == 0 || board1[i][j] == 6) continue;
            cctv.push_back({ i,j });
        }
    }*/

    //test
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (board1[i][j] == 0) nm++;
            if (board1[i][j] == 0 || board1[i][j] == 6) continue;
            cctv.push_back({ i,j });
        }
    }

    for (int tmp = 0; tmp < (1 <<( 2 * cctv.size())); ++tmp)
    {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                board2[i][j] = board1[i][j];

        int brute = tmp;
        for (int i = 0; i < cctv.size(); ++i)
        {
            int dir = brute % 4;
            brute /= 4;

            int x = cctv[i].X;
            int y = cctv[i].Y;
            if (board1[x][y] == 1)
            {
                search(x, y, dir);
            }
            else if (board1[x][y] == 2)
            {
                search(x, y, dir);
                search(x, y, dir + 2);
            }
            else if (board1[x][y] == 3)
            {
                search(x, y, dir);
                search(x, y, dir + 1);
            }
            else if (board1[x][y] == 4)
            {
                search(x, y, dir);
                search(x, y, dir + 1);
                search(x, y, dir + 2);
            }
            else if (board1[x][y] == 5)
            {
                search(x, y, dir);
                search(x, y, dir + 1);
                search(x, y, dir + 2);
                search(x, y, dir + 3);
            }
        }

        int val = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                val += (board2[i][j] == 0);
            }
        }
        nm = min(val, nm);
    }
    cout << nm << "\n";
}

