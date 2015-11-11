//
// Created by VanGoghsCoffee on 11/11/15.
//

#ifndef ZEROGPARTS_POWERHUB_H
#define ZEROGPARTS_POWERHUB_H

enum EPowerHubStatus
{
    NONE,
    GOOD,
    BAD,
    UGLY
};

class CPowerHub
{
    public:

        CPowerHub();
        ~CPowerHub();

    private:

        float           m_Voltage;
        EPowerHubStatus m_Status;
};

#endif //ZEROGPARTS_POWERHUB_H
