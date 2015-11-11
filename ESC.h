//
// Created by David Ro on 11/11/15.
//

#ifndef ZEROGPARTS_ESC_H
#define ZEROGPARTS_ESC_H

enum EESCStatus
{
    NONE,
    GOOD,
    BAD,
    UGLY
};

class CESC
{
    public:

        CESC();
        ~CESC();

    private:

        EESCStatus m_Status;
};

#endif //ZEROGPARTS_ESC_H
