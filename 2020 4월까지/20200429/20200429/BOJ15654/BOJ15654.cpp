#include <iostream>
#include <algorithm>
using namespace std;

int n, m;

void solution(int * arr, int* used, int* numbers, int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; ++i)
        {
            cout << arr[i] << ' ';
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        if (used[i] == 0)
        {
            used[i] = 1;
            arr[k] = numbers[i];
            solution(arr, used, numbers, k + 1);
            used[i] = 0;
        }
    }
}

int main()
{
    cin >> n >> m;

    int * numbers = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }
    sort(numbers, numbers + n);
    int* used = new int[n];
    fill(used, used + n, 0);
    int* arr = new int[m];
    solution(arr, used, numbers, 0);
}