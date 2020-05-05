#include "NumberMagicEasy.h"

int NumberMagicEasy::theNumber(string answer)
{
	vector<string> comp = { "YYYY","YYYN", "YYNY", "YYNN",
						   "YNYY", "YNYN", "YNNY", "YNNN",
						   "NYYY", "NYYN", "NYNY", "NYNN",
						   "NNYY", "NNYN", "NNNY", "NNNN" };

	int i = 1;
	for (vector<string>::iterator iter = comp.begin(); iter != comp.end(); ++iter)
	{
		if (*iter == answer)
		{
			return i;
		}
		++i;
	}
	return 0;
}
