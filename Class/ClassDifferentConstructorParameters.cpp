#include <iostream>

using namespace std;

class box{
	private:
		double x=1, y=1, z=1;
	public:
		
		box(double xBox, double yBox)
		{
			x = xBox;
			y = yBox;
		}
		
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
			cout << "X : " << x << ",Y : "<< y << ",Z : " << z << " with calculated the box..." << endl;
		}
};

int main()
{
	box box1(2.2,3.2,1.1);
	box box2(2.2,3.2);
	
	cout << "Volume of box : "<<box1.calculateBox() << endl;
	cout << "Area of box : " << box2.calculateBox() << endl;
}
