#include "linked_queue.h"
#include <iostream>

int main()
{
	using namespace std;
	LQ<int> Q;
	if(Q.isEmpty())
		cout << "The queue is empty!" <<endl;
	else
		cout << "The queue is not empty!" <<endl;
	cout << "Please input the data you want push in queue." <<endl;
	cout << "enter 99999 to end."<<endl;
	int e;
	cin >> e;
	while(e!=99999)
	{
		Q.EnQueue(e);
		cin >> e;
	}
	if(Q.isEmpty())
		cout << "The queue is empty!" <<endl;
	else
		cout << "The queue is not empty!" <<endl;
	cout << "the length of queue is " << Q.Length() << endl;
	while(Q.DeQueue(e))
		cout << e << "  ";
	cout << endl;
	return 0;

}