#pragma once
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class ChessMatrix
{
private:
	long long board[100][100][55] = { 0 };
	int vx[16] = { 1,1,0,-1,-1,-1,0,1,1,2,2,1,-1,-2,-2,-1 };
	int vy[16] = { 0,-1,-1,-1,0,1,1,1,2,1,-1,-2,-2,-1,1,2 };
public:
	long long howMany(int size, vector<int> start, vector<int> end, int numMoves);
};

