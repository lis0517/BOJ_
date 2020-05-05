#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
void solution(int* arr, int* numbers, int k)
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
        arr[k] = numbers[i];
        solution(arr, numbers, k + 1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    int* arr = new int[m];
    int* numbers = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }
    sort(numbers, numbers + n);
    solution(arr, numbers, 0);
}