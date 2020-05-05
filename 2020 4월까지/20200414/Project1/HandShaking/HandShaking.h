#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class HandShaking
{
private:
	long dp[50] = { 0 };
public:
	long countPerfect(int n);
};

