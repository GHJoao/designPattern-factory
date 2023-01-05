#ifndef FACTORY_H_INCLUDED
#define FACTORY_H_INCLUDED

#include "gui_factory.h"
#include "windows_button.h"
#include "osx_button.h"

class Factory : public GUIFactory
{
    public:
        Button* createButton(std::string type)
        {
            if(type == "Windows")
                return new WindowsButton;
            else if(type == "OSX")
                return new OSXButton;
            else
                throw;
        }

};

#endif // FACTORY_H_INCLUDED
