//
// Created by David Ro on 11/11/15.
//

#include "Motor.h"

CMotor::CMotor()
    : m_Speed (0.0f)
    , m_Direction (0)
{
}

CMotor::~CMotor() { }

void CMotor::setSpeed(float _Speed)
{
    m_Speed = _Speed;
}

void CMotor::setDirection(int _Direction)
{
    m_Direction = _Direction;
}