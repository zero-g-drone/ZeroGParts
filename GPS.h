//
// Created by VanGoghsCoffee on 11/11/15.
//

#ifndef ZEROGPARTS_GPS_H
#define ZEROGPARTS_GPS_H

struct SPosition;

enum EGPSStatus
{
    NONE,
    GOOD,
    BAD,
    UGLY
};

class CGPS
{
    public:

        CGPS();
        ~CGPS();

    private:

        SPosition*   m_Position;
        EGPSStatus   m_Status;
};

#endif //ZEROGPARTS_GPS_H
