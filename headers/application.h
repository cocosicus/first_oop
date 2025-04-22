#ifndef APPLICATION_H
#define APPLICATION_H

#include "shapemanager.h"
#include "menu.h"
#include "actions.h"

class Application {
private:
    ShapeManager manager;

public:
    void run();
};

#endif // APPLICATION_H
