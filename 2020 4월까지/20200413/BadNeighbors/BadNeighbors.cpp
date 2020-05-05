#include "BadNeighbors.h"

int BadNeighbors::maxDonations(vector<int> donations)
{
	int m = INT_MIN;

	int n = donations.size();


	for (int i = 0; i < n-1; ++i)
	{
		dp[i] = donations[i];
		if (i == 2) dp[i] += dp[0];
		else if(i > 2)
		{
			dp[i] = max(dp[i - 2] + donations[i], dp[i - 3] + donations[i]);
		}
		m = max(m, dp[i]);
	}

	for (int i = 0; i < n - 1; ++i)
	{
		dp[i] = donations[i+1];
		if (i == 2) dp[i] += dp[0];
		else if (i > 2)
		{
			dp[i] = max(dp[i - 2] + donations[i+1], dp[i - 3] + donations[i+1]);
		}
		m = max(m, dp[i]);
	}

	return m;
}
