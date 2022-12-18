#pragma once

#include <string>

class RuntimeIf
{
    virtual void startApplications() = 0;
    virtual void stopApplications() = 0;
    virtual std::string getVersion() = 0;
};
