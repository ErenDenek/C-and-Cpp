#include <iostream>

using namespace std;

class complex{
	private:
		double real;
		double imag;
		
	public:
		
		complex(double r = 0.0, double i = 0.0) : real(r), imag(i)
		{
			
		}
		
		double mag()
		{
			return getMag();
		}
		
		operator double()
		{
			return 5.3;
		}
	private:
		double getMag()
		{
			return real*real + imag*imag;
		}
};
int main()
{
	
	complex obj(2.3, 2.3);
	
	cout << obj.mag() << endl;
	cout << obj << endl;
	
}
