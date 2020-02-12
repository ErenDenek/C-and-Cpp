#include <iostream>
#include <string.h>

using namespace std;

typedef struct person{
	char name[15];
	char surname[15];
	int age;
}person;

int main()
{
	person admin;
	
	strcpy(admin.name, "EREN");
	strcpy(admin.name, "DENEK");
	admin.age = 23;
	
	cout << admin.age << endl;
	return 0;	
}
