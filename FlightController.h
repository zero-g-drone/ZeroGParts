//
// Created by VanGoghsCoffee on 11/11/15.
//

#ifndef ZEROGPARTS_FLIGHTCONTROLLER_H
#define ZEROGPARTS_FLIGHTCONTROLLER_H

enum EFlightControllerStatus
{
    NONE,
    GOOD,
    BAD,
    UGLY
};

class CFlightController
{
    public:

        CFlightController();
        ~CFlightController();

    private:

        EFlightControllerStatus m_Status;
};

#endif //ZEROGPARTS_FLIGHTCONTROLLER_H
