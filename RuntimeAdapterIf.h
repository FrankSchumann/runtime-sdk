#pragma once

#include "copa-pdk/component/ComponentIf.h"

class RuntimeAdapterIf : public COPA::ComponentIf
{
   public:
    virtual void startApplications() = 0;
    virtual void stopApplications() = 0;
    virtual void subscribe() = 0;
};
