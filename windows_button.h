#ifndef WINDOWS_BUTTON_H_INCLUDED
#define WINDOWS_BUTTON_H_INCLUDED

#include <iostream>
#include "button.h"

class WindowsButton : public Button
{

    public:
        void paint()
        {
            std::cout << "Windows Button" << std::endl;
        }
};

#endif // WINDOWS_BUTTON_H_INCLUDED
