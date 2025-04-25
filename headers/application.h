#ifndef APPLICATION_H
#define APPLICATION_H

#include "shapemanager.h"
#include "menu.h"
#include "actions.h"
#include <map>
#include <functional>

class Application {
private:
    ShapeManager manager;
    std::map<int, std::function<void(ShapeManager&)>> actions;

public:
    Application();
    void run();
};

#endif // APPLICATION_H
