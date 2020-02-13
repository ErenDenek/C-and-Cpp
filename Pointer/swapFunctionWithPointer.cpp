#include <iostream>

using namespace std;

void mySwap(int *n1, int *n2)
{
	//n1 <-> n2
	int temp = *n2;
	*n2 = *n1;
	*n1 = temp;
	  
}
int main()
{
	int a = 5, b = 4;
	mySwap(&a,&b);
	
	cout << a << b ;
	
	return 0;
	
}
