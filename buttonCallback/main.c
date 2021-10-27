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

	// Oluþturduðumuz button nesnesine özellikler atýyoruz.
	buttonCreate(&myButton, "myButton", BUT_CLICKED, &userButtonClickedCallBack);
	
	/* Bu while döngüsü genellikle arayüz tarafýndan nesneleri kontrol etmek için kullanýlýr.
	   Kullanýcý tarafýndan dikkate alýnmaz.	
	*/
	while(1)
	{
		buttonControlEvent(&myButton);
	}
	
	return 0;
}
