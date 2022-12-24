#pragma once

#include <string>

#include "copa-pdk/component/ComponentIf.h"

class RuntimeIf : public COPA::ComponentIf
{
	virtual void subscribe() = 0;
    virtual void startApplications() = 0;
    virtual void stopApplications() = 0;
    virtual std::string getRuntimeVersion() = 0;
};
