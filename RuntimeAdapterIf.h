#pragma once

#include <string>

#include "copa-pdk/component/ComponentIf.h"
#include "runtime-sdk/RuntimeIf.h"

class RuntimeAdapterIf : public COPA::ComponentIf
{
   public:
    virtual void startApplications() = 0;
    virtual void stopApplications() = 0;
    virtual void subscribe( std::string const& name, std::shared_ptr< RuntimeIf > const runtime ) = 0;
    virtual std::shared_ptr< RuntimeIf > get( std::string const& name ) const = 0;
};
