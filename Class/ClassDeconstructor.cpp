#include <iostream>

using namespace std;

class box{
	private:
		double x, y, z;
	public:
		
		box(double xBox, double yBox, double zBox)
		{
			x = xBox;
			y = yBox;
			z = zBox;		
		}	
		
		double calculateBox()
		{
			return x*y*z;
		}
		
		~box()
		{
			cout << "X : " << x << ",Y : "<< y << ",Z : " << z << " with calculated volume of the box...";
		}
};

int main()
{
	box box1(2.2,3.2,1.1);

	
	cout << "Volume of box : "<<box1.calculateBox() << endl;
}
