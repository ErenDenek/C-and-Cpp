#include <iostream>

using namespace std;
	 

int main() 
{ 
	int num = 10;
	
	int *ptr1;
	
	int **ptr2;
	
	ptr1 = &num;
	
	ptr2 = &ptr1;
	
	printf("Value of var = %d\n", num ); 
	printf("Address of var = %x\n", &num ); 
    printf("Value of var using single pointer = %d\n", *ptr1 ); 
    printf("Address of var using single pointer = %x\n", &ptr1 ); 
    printf("Value of var using double pointer = %d\n", **ptr2); 
    printf("Address of var using double pointer = %x\n", &ptr2 );
return 0; 
}
