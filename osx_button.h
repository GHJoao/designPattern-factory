#ifndef OSX_BUTTON_H_INCLUDED
#define OSX_BUTTON_H_INCLUDED

#include <iostream>
#include "button.h"

class OSXButton : public Button
{

    public:
        void paint()
        {
            std::cout << "OSX Button" << std::endl;
        }
};

#endif // OSX_BUTTON_H_INCLUDED
