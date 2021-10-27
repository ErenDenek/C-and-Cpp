#include <stdio.h>
#include <stdlib.h>
#include "button.h"

BUTTON_ITEM_TS myButton;

void userButtonClickedCallBack(void)
{
	static int buttonCounter;
	
	printf("Button counter : %d\n", ++buttonCounter);
}

int main(int argc, char *argv[]) {

	// Olu�turdu�umuz button nesnesine �zellikler at�yoruz.
	buttonCreate(&myButton, "myButton", BUT_CLICKED, &userButtonClickedCallBack);
	
	/* Bu while d�ng�s� genellikle aray�z taraf�ndan nesneleri kontrol etmek i�in kullan�l�r.
	   Kullan�c� taraf�ndan dikkate al�nmaz.	
	*/
	while(1)
	{
		buttonControlEvent(&myButton);
	}
	
	return 0;
}
