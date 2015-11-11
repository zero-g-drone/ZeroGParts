//
// Created by VanGoghsCoffee on 11/11/15.
//

#include "Battery.h"


CBattery::CBattery()
    : m_Status      (EBatteryStatus::NONE)
    , m_Percentage  (0.0f)
    , m_Loading     (false)
{ }

CBattery::~CBattery() { }

