#include <iostream>

using namespace std;

class box{
	private:
		
	public:
		double x, y, z;
		
		double calculateBox()
		{
			return x*y*z;		
		}	
	
};

int main()
{
	box box1;

	box1.x = 2.2;
	box1.y = 3.2;
	box1.z = 1.1;
	
	cout << box1.calculateBox();
}
