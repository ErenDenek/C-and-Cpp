#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;


int main()
{
	int arr[3] = {1,2,3};
	int *ptr;
	
	ptr = arr;
	
	for(int i = 0 ; i < 3; i++)
	{
		cout << i+1 <<". elements of value : " << *(ptr+i) << endl; 
		cout << i+1 <<". elements of address content " << ptr+i <<  endl;
	} 
	return 0;	
}
