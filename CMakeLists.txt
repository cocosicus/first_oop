cmake_minimum_required(VERSION 3.16)

project(lab1_oop LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(lab1_oop
  main.cpp
  point.h
  shape.h
  exceptions.h exceptions.cpp
  circle.h circle.cpp
  rectangle.h rectangle.cpp
  triangle.h triangle.cpp
  shapefactory.h shapefactory.cpp
  shapemanager.h shapemanager.cpp
  inputhelper.h inputhelper.cpp
  menu.h menu.cpp
  application.h application.cpp
  circlefactory.h circlefactory.cpp
  rectanglefactory.h rectanglefactory.cpp
  trianglefactory.h trianglefactory.cpp
  shapefactorybase.h
  math.h
  math.cpp
  actions.h


)
target_link_libraries(lab1_oop Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS lab1_oop
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
