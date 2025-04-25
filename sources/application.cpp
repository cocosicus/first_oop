#include <iostream>
#include <string>
#include <map>
#include <functional> // Для std::function
#include "application.h"

Application::Application() : actions({
          {ADD_CIRCLE, [](ShapeManager& m) { m.addShape("Circle"); }},
          {ADD_RECTANGLE, [](ShapeManager& m) { m.addShape("Rectangle"); }},
          {ADD_TRIANGLE, [](ShapeManager& m) { m.addShape("Triangle"); }},
          {LIST_SHAPES, [](ShapeManager& m) { m.listShapes(); }},
          {LIST_AREAS, [](ShapeManager& m) { m.listAreas(); }},
          {SUM_AREAS, [](ShapeManager& m) { std::cout << "Sum of areas: " << m.sumAreas() << std::endl; }},
          {SORT_BY_AREA, [](ShapeManager& m) { m.sortShapesByArea(); }},
          {DEL_SHAPE, [](ShapeManager& m) { m.deleteShape(); }},
          {DEL_BY_AREA, [](ShapeManager& m) { m.deleteShapesByArea(); }}
      }) {}

void Application::run() {
    int choice;
    do {
        choice = Menu::getChoice();

        if (choice != NONE) {
            try {
                if (actions.count(choice)) {
                    actions[choice](manager);
                } else {
                    std::cout << "Invalid choice. Please try again." << std::endl;
                }
            } catch (const ShapeException& e) {
                std::cerr << "Error: " << e.what() << std::endl;
            } catch (const std::exception& e) {
                std::cerr << "An unexpected error occurred: " << e.what() << std::endl;
            }
        }

    } while (choice != CLOSE);

    std::cout << "Exiting program." << std::endl;
}

