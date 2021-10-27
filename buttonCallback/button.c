#include "button.h"
#include <stdio.h>

BUTTON_ITEM_TS myButton;

void buttonCreate(BUTTON_ITEM_TS* button_item, char* _buttonName, BUTTON_EVENT_TYPE_TE _buttonEventType, buttonEvent_t _buttonEventCallback)
{
    button_item->buttonName 			= _buttonName;
    button_item->buttonEventType 	= _buttonEventType;
    button_item->buttonEventCallback = _buttonEventCallback;

	printf("===================Buton ozellikleri===================\n");
    printf("Button name : %s\n", button_item->buttonName), printf("Button event type : %d\n", button_item->buttonEventType);
    printf("===================Buton Simulasyon kullanimi=====================\n");
    printf("Butona tiklama icin 0 degerini giriniz\n");
}
void buttonControlEvent(BUTTON_ITEM_TS *button_item) //Arayüz tarafýndan kontrol edilen fonksiyon
{
    static BUTTON_EVENT_TYPE_TE buttonInput;

    printf("Buton giris tipini giriniz : "), scanf("%d", &buttonInput);

    if( buttonInput == button_item->buttonEventType )
    {
    	printf("Butona basildi callback fonksiyon cagrildi ");
        button_item->buttonEventCallback();
    }
    else{
        printf("Gecersiz buton girisi\n");
    }
}

