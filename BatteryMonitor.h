//
// Created by VanGoghsCoffee on 11/11/15.
//

#ifndef ZEROGPARTS_BATTERYMONITOR_H
#define ZEROGPARTS_BATTERYMONITOR_H

enum EBatteryMonitorStatus
{
    NONE,
    GOOD,
    BAD,
    UGLY
};

class CBatteryMonitor
{
    public:

        CBatteryMonitor();
        ~CBatteryMonitor();

    private:

        EBatteryMonitorStatus m_Status;
};

#endif //ZEROGPARTS_BATTERYMONITOR_H
