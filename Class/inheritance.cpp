#include <iostream>

using namespace std;


class select{
	public:
		int select;
		
};


class generalClass: public select{
	public:
		int basicMath(int x, int y)
		{
			if(select == 0) return x+y;
			if(select == 1) return x-y;
		}
	
};

int main()
{
	generalClass operation;
	
	operation.select = 0;
	
	int result = operation.basicMath(2,3);
	
	cout << result;
	return 0;
}
