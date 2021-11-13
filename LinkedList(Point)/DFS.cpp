#include "DFS.h"
#include <memory>
#include <iostream>
using namespace std;
int city[9][9] = {
//   A  B  C  D  E  F  G  H  I
	{0, 1, 0, 0, 0, 0, 1, 0, 0},
	{0, 0, 1, 0, 1, 0, 0, 0, 0},
	{0, 0, 0, 1, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 1, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 1, 0}
};

enum { UNIVISIT, VISIT };
char cityName[9] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I' };

void DFS::findPath()
{
	bool visitInfo[9];
	memset(visitInfo, UNIVISIT, sizeof(visitInfo));

	m_stack.push(m_sNode);
	visitInfo[m_sNode] = VISIT;

	while (!m_stack.isEmpty() && m_tNode != m_stack.getTop())
	{
		int curCity = m_stack.getTop();
		bool bVisitToAllNext = false;
		for (int nextCity = 0; nextCity < 9; nextCity++)
		{	// 인접한 방문하지 않은 노드가 있으면 방문하여라
			if (city[curCity][nextCity] == 1 && visitInfo[nextCity] == UNIVISIT)
			{
				curCity = nextCity;
				m_stack.push(curCity);
				visitInfo[curCity] = VISIT;
				bVisitToAllNext = true;
				break;
			}
		}
		// 방문할 노드가 없으면 backtracking
		if (bVisitToAllNext == false)
			m_stack.pop();
	}
}

void DFS::draw()
{
	while (!m_stack.isEmpty())
		cout << cityName[m_stack.pop()] << endl;
}
