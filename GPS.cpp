//
// Created by VanGoghsCoffee on 11/11/15.
//

#include "GPS.h"
#include "Position.h"

CGPS::CGPS()
    : m_Status (EGPSStatus::NONE)
{
    m_Position = new SPosition();
}

CGPS::~CGPS()
{
    delete m_Position;
}