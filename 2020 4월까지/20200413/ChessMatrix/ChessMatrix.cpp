#include "ChessMatrix.h"

long long ChessMatrix::howMany(int size, vector<int> start, vector<int> end, int numMoves)
{
	int startX = start[0], startY = start[1];
	int endX = end[0], endY = end[1];

	board[startY][startX][0] = 1;

	for (int i = 1; i <= numMoves; ++i)
	{
		for (int x = 0; x < size; ++x) 
		{
			for (int y = 0; y < size; ++y) 
			{
				for (int k = 0; k < 16; ++k)
				{
					int dx = x + vx[k];
					int dy = y + vy[k];
					if (dx >= 0 && dy >= 0 && dx < size && dy < size)
					{
						board[dy][dx][i] += board[y][x][i-1];
					}
				}
			}
		}
	}

	return board[endY][endX][numMoves];
}
