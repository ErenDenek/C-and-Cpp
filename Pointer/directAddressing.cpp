#include <stdio.h>

int main()
{
	int *ptr = (int*)0x62FE14;
	*ptr = 4;
	printf("ptr of address : %p\n",ptr);
	printf("Value of ptr address : %d", *ptr);
}
