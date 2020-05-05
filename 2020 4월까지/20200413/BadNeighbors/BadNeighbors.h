#pragma once

#include <vector>
#include <algorithm>

using namespace std;

class BadNeighbors
{
private:
	int dp[40];
public:
	int maxDonations(vector<int> donations);
};

