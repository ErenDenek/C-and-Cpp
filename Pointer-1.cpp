#include <iostream>

using namespace std;

int main()
{

	int num = 10;
	cout << "Value of variables : " << num << endl;
	cout << "Address of variables : " << &num << endl;
	
	int* ptr;
	ptr = &num;
	
	cout << "Address that pointer ptr holds : " << ptr << endl;
	cout << "Content of the address pointer ptr holds : " << *ptr << endl;
	
	num = 11;
	cout << "Address that pointer ptr holds : " << ptr << endl;
	cout << "Content of the address pointer ptr holds : " << *ptr << endl;
	
	*ptr = 2;
	cout << "Adress of variables (num) : " << &num << endl;
	cout << "Value of variables (num) : " << num << endl;  
	
return 0;
	
}
