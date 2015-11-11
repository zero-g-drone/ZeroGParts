//
// Created by VanGoghsCoffee on 11/11/15.
//

#ifndef ZEROGPARTS_BATTERY_H
#define ZEROGPARTS_BATTERY_H

enum EBatteryStatus
{
    NONE,
    GOOD,
    BAD,
    UGLY
};

class CBattery
{
    public:

        CBattery();
        ~CBattery();

    private:

        EBatteryStatus  m_Status;
        float           m_Percentage;
        bool            m_Loading;
};

#endif //ZEROGPARTS_BATTERY_H
