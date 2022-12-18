#pragma once

class RuntimeAdapterIf
{
    virtual void startApplications() = 0;
    virtual void stopApplications() = 0;
    virtual void subscribe() = 0;
};
