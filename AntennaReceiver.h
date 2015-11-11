//
// Created by VanGoghsCoffee on 11/11/15.
//

#ifndef ZEROGPARTS_ANTENNARECEIVER_H
#define ZEROGPARTS_ANTENNARECEIVER_H

enum EAntennaReceiverStatus
{
    NONE,
    GOOD,
    BAD,
    UGLY
};

class CAntennaReceiver
{
    public:

        CAntennaReceiver();
        ~CAntennaReceiver();

    private:

        EAntennaReceiverStatus m_Status;
};

#endif //ZEROGPARTS_ANTENNARECEIVER_H
