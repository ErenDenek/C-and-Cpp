#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

typedef struct person{
	char name[15];
	char surname[15];
	int age;
}person;

int main()
{
	person *admin;
	
	admin = (person*) malloc (sizeof(person));
        
	strcpy(admin -> name, "EREN");
	strcpy(admin -> surname, "DENEK");
	admin->age = 23;
	
	cout << admin->age << endl;
	return 0;	
}
