#include <iostream>


long long solution(int a, int b, int c)
{
    if (b == 1) return a % c;

    long long value = solution(a, b / 2, c);
    long long result = (b % 2 == 0) ? (value * value) % c : (value * value * a) % c;
    return result;
}

int main()
{
    std::cout << solution(10, 11, 12);
}
