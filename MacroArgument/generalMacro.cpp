#include <iostream>

#define PI 3.14
#define square(x) (x*x)
#define findMin(x,y) (x < y ? x : y)
#define findMax(x,y) (x > y ? x : y)


using namespace std;



int main()
{
	cout << square(4)<<endl;
	cout << findMin(5,6)<<endl;
	cout << findMax(5,6)<<endl;
	
#ifdef PI
	cout << 2*PI*square(3);
#elif PI
	cout << "Pi number is not declare"<<endl;
#endif
	
}
