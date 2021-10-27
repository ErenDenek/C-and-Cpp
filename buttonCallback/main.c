#include <stdio.h>
#include <stdlib.h>
#include "button.h"

//Buton nesnesi ekliyoruz
//Her farklı buton için burada nesne oluşturmamız gerekiyor.
//Her farklı buton için buttonCreate fonksiyonunu kullanarak özellik ataması yapmamız gerekiyor.
BUTTON_ITEM_TS myButton;

void userButtonClickedCallBack(void)
{
	static int buttonCounter;
	
	printf("Button counter : %d\n", ++buttonCounter);
}

int main(int argc, char *argv[]) {

	// Oluşturduğumuz button nesnesine özellikler atıyoruz.
	buttonCreate(&myButton, "myButton", BUT_CLICKED, &userButtonClickedCallBack);
	
	/* Bu while döngüsü genellikle arayüz tarafından nesneleri kontrol etmek için kullanılır.
	   Kullanıcı tarafından dikkate alınmaz.	
	*/
	while(1)
	{
		buttonControlEvent(&myButton);
	}
	
	return 0;
}
