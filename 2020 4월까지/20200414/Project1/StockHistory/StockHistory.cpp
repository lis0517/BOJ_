#include "StockHistory.h"

int StockHistory::maximumEarnings(int initialInvestment, int monthlyContribution, vector<string> stockPrices)
{
	int money = initialInvestment;
	int monthly = stockPrices.size();
	int corpNum = 1;

	char* c = (char*)stockPrices[0].c_str();
	while (*c++)
	{
		if (*c == ' ')
			++corpNum;
	}

	int** corp = new int*[50];
	for (int i = 0; i < 50; ++i)
	{
		corp[i] = new int[999];
	}
	//int corp[50][999];

	for (int i = 0; i < monthly; ++i)
	{
		string s = stockPrices[i];
		for (int j = 0; j < corpNum; ++j)
		{
			int pos = s.find(' ');//ã�� ���ڿ��� ù��° �ε��� ��ȯ
			if (pos == string::npos)//ã�� ���ڿ��� ���� ��� string::npos��ȯ
			{
				//�Ѱ� �ۿ� ���ٴ� ���̹Ƿ� ó������ �Է�
				corp[i][j] = atoi(s.c_str());
				cout << corp[i][j] << endl;
			}
			else 
			{
				corp[i][j] = atoi(s.substr(0, pos).c_str());
				s = s.substr(pos + 1, s.size());
				cout << corp[i][j] << " ";
			}
		}
	}

	double proportion[50];//����
	bool   buy[50];//�������
	fill_n(proportion, 50, 0.0);
	fill_n(buy, 50, false);
	double max = 0.0, profit = 0.0;

	for (int i = monthly - 2; i >= 0; --i)
	{
		for (int j = 0; j < corpNum; ++j)
		{
			double p = ((1.0 * corp[monthly - 1][j]) / corp[i][j]) - 1.0;

			if (max < p && 0 < p)
			{
				proportion[i] = p;
				buy[i] = true;
				max = p;
			}
		}
	}

	for (int i = 0; i < monthly; ++i)
	{
		if (buy[i])
		{
			profit += money * proportion[i];
			money = 0;
		}
		money += monthlyContribution;
	}

	return (int)round(profit);
}
