//
// Created by David Ro on 09/11/15.
//

#include <stdlib.h>
#include <string.h>
#include "Antenna.h"

CAntenna::CAntenna(char* _NetworkName, char* _NetworkPassword)
        : m_NetworkName (NULL)
        , m_NetworkPassword (NULL)
{
    setNetworkName(_NetworkName);
    setNetworkPassword(_NetworkPassword);
}

CAntenna::CAntenna()
        : m_NetworkName(NULL)
        , m_NetworkPassword(NULL)
{
}

CAntenna::~CAntenna()
{
    if (m_NetworkPassword != NULL)
        free(m_NetworkPassword);

    if (m_NetworkName != NULL)
        free(m_NetworkName);
}

void CAntenna::setNetworkName(char* _Name)
{
    m_NetworkName = (char*) malloc(strlen(_Name));
    m_NetworkName = _Name;
}

const char* CAntenna::getNetworkName()
{
    return m_NetworkName;
}

void CAntenna::setNetworkPassword(char* const _Password)
{
    m_NetworkPassword = (char*) malloc(strlen(_Password));
    m_NetworkPassword = _Password;
}

bool CAntenna::isConnected()
{
    // communicate with Arduino stuff here
    return m_Connected;
}

bool CAntenna::connect()
{
    // connect antenna to network here
    return true;
}

void CAntenna::setSignalStrength(float _SignalStrength)
{
    m_SignalStrength = _SignalStrength;
}

float CAntenna::getSignalStrength()
{
    // arduino stuff in here
    return m_SignalStrength;
}
