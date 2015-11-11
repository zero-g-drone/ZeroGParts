//
// Created by VanGoghsCoffee on 11/11/15.
//

#ifndef ZEROGPARTS_GIMBALMONITOR_H
#define ZEROGPARTS_GIMBALMONITOR_H

enum EGimbalMonitorStatus
{
    NONE,
    GOOD,
    BAD,
    UGLY
};

class CGimbalMonitor
{
    public:

        CGimbalMonitor();
        ~CGimbalMonitor();

    private:

        int                  m_Direction;
        float                m_Speed;
        EGimbalMonitorStatus m_Status;
};

#endif //ZEROGPARTS_GIMBALMONITOR_H
