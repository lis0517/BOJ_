#include "DDLinkedList.h"

void DDLinkedList::insert(int addr, int num)
{
}

void DDLinkedList::erase(int addr)
{
}

void DDLinkedList::traverse()
{
	int cur = next[0];
	while (cur != -1)
	{
		cout << dst[cur] << " ";
		cur = next[cur];
	}
	cout << "\n\n";
}
