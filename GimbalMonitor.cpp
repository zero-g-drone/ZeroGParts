//
// Created by VanGoghsCoffee on 11/11/15.
//

#include "GimbalMonitor.h"

CGimbalMonitor::CGimbalMonitor()
    : m_Status    (EGimbalMonitorStatus::NONE)
    , m_Direction (0)
    , m_Speed     (0.0f)
{ }

CGimbalMonitor::~CGimbalMonitor() { }