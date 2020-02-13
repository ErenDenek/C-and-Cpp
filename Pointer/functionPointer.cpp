#include <iostream>

using namespace std;

int sum(int x, int y)
{
	return x+y;
}
int main()
{
	int (*ptr)(int,int);
	ptr = &sum;
	int a = (*ptr)(2,3);
	cout <<a;
	
	return 0;
}
