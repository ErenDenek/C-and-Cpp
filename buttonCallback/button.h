#ifndef BUTTON_H
#define BUTTON_H


typedef void(*buttonEvent_t)(void);

typedef enum{
    BUT_CLICKED = 0,
    BUT_PRESSED,
    BUT_RELEASED,
    BUT_TOGGLED
}BUTTON_EVENT_TYPE_TE;

typedef struct{
    char* buttonName;
    BUTTON_EVENT_TYPE_TE buttonEventType;
    buttonEvent_t buttonEventCallback;
}BUTTON_ITEM_TS;


void buttonControlEvent(BUTTON_ITEM_TS* button_item);

void buttonCreate(BUTTON_ITEM_TS* button_item, char* _buttonName, BUTTON_EVENT_TYPE_TE _buttonEventType, buttonEvent_t _buttonEventCallback);

#endif // BUTTON_H

