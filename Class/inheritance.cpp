#include <iostream>

using namespace std;


class selectClass{
	public:
		int select;
		
		int sum(int nb1, int nb2)
		{
			return nb1+nb2;
		}
		
		int diff(int nb1, int nb2)
		{
			return nb1-nb2;
		}
		
};


class generalClass: public selectClass{
	public:
		int basicMath(int x, int y)
		{
			if(select == 0) return sum(x,y);
			if(select == 1) return diff(x,y);
		}
	
};

int main()
{
	generalClass operation;
	
	operation.select = 1;
	
	int result = operation.basicMath(2,3);
	
		
	cout << result;
	return 0;
}
