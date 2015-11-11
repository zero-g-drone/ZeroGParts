//
// Created by VanGoghsCoffee on 11/11/15.
//

#ifndef ZEROGPARTS_POSITION_H
#define ZEROGPARTS_POSITION_H

struct SPosition
{
    SPosition()
        : m_Lat         (0.0f)
        , m_Long        (0.0f)
        , m_Alt         (0.0f)
        , m_Accuracy    (0.0f)
        , m_Satellites  (0)
    {}
    double  m_Lat;
    double  m_Long;
    double  m_Alt;
    float   m_Accuracy;
    int     m_Satellites;
};

#endif //ZEROGPARTS_POSITION_H
