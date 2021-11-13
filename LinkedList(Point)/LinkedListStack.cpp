#include <iostream>
#include "DFS.h"
#include "Stack.h"
using namespace std;

int main()
{
	/*
	Stack<float> intStack;

	for (int i = 0; i < 5; i++)
		intStack.push(i * 2.5f);

	do
	{
		cout << intStack.pop() << endl;
	} while (!intStack.isEmpty());
	*/
	DFS dfs(0, 7);
	
	dfs.findPath();
	dfs.draw();
}