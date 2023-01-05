#include <iostream>
#include "factory.h"

using namespace std;

int main()
{
    GUIFactory* guiFactory;
    Button* btn;

    guiFactory = new Factory;

    btn = guiFactory->createButton("OSX");
    btn->paint();
    btn = guiFactory->createButton("Windows");
    btn->paint();
    //It raises an exception, cos' it does not exist the Anything Else type
    //btn = guiFactory->createButton("Anything Else");
    //btn->paint();

    return 0;
}
