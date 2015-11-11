//
// Created by VanGoghsCoffee on 11/11/15.
//

#ifndef ZEROGPARTS_GIMBALCONTROLLER_H
#define ZEROGPARTS_GIMBALCONTROLLER_H

enum EGimbalControllerStatus
{
    NONE,
    GOOD,
    BAD,
    UGLY
};

class CGimbalController
{
    public:

        CGimbalController();
        ~CGimbalController();

    private:

        EGimbalControllerStatus m_Status;
};

#endif //ZEROGPARTS_GIMBALCONTROLLER_H
