#include "ColorfulBoxesAndBalls.h"

/*
����
numRed�� numBlue �� ���� ���� �� ��ŭ �ٲ� �� ����

*/
int ColorfulBoxesAndBalls::getMaximum(int numRed, int numBlue, int onlyRed, int onlyBlue, int bothColors)
{
	int change = min(numRed, numBlue);

	//������ ������ �ɼ� �����Ƿ�
	int ans = INT_MIN;
	
	for (int i = 0; i <= change; ++i)
	{
		int total = 0;
		total += ((numRed - i) * onlyRed) + ((numBlue - i) * onlyBlue) + ((2 * i) * bothColors);
		ans = max(ans, total);
	}

	return ans;
}
