#ifndef INPUTHELPER_H
#define INPUTHELPER_H

#include <string>

class InputHelper {
public:
    static bool getDouble(const std::string& prompt, double& value);
    static bool getInt(const std::string& prompt, int& value);
};

#endif // INPUTHELPER_H
