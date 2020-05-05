#include "ColorfulBoxesAndBalls.h"

/*
전략
numRed와 numBlue 중 가장 작은 수 만큼 바꿀 수 있음

*/
int ColorfulBoxesAndBalls::getMaximum(int numRed, int numBlue, int onlyRed, int onlyBlue, int bothColors)
{
	int change = min(numRed, numBlue);

	//점수가 음수가 될수 있으므로
	int ans = INT_MIN;
	
	for (int i = 0; i <= change; ++i)
	{
		int total = 0;
		total += ((numRed - i) * onlyRed) + ((numBlue - i) * onlyBlue) + ((2 * i) * bothColors);
		ans = max(ans, total);
	}

	return ans;
}
