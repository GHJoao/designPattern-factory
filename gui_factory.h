#ifndef GUI_FACTORY_H_INCLUDED
#define GUI_FACTORY_H_INCLUDED

#include "button.h"

class GUIFactory
{
    public:
        virtual Button *createButton(std::string) = 0;
};

#endif // GUI_FACTORY_H_INCLUDED
