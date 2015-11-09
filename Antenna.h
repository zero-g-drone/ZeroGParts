//
// Created by David Ro on 09/11/15.
//

#ifndef ZEROGPARTS_ANTENNA_H
#define ZEROGPARTS_ANTENNA_H


class CAntenna
{
public:

    CAntenna(char* _NetworkName, char* _Password);
    CAntenna();
    ~CAntenna();

public:

    // Network name
    void  setNetworkName(char* _Name);
    const char* getNetworkName();

    // Network password
    void setNetworkPassword(char* _Password);

    // Connection
    bool isConnected();

    // Signal
    void setSignalStrength(float _SignalStrength);
    float getSignalStrength();

private:

    bool  m_Connected;
    float m_SignalStrength;
    char* m_NetworkName;
    char* m_NetworkPassword;
};


#endif //ZEROGPARTS_ANTENNA_H
