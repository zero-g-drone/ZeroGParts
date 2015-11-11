//
// Created by David Ro on 11/11/15.
//

#ifndef ZEROGPARTS_MOTOR_H
#define ZEROGPARTS_MOTOR_H

class CMotor
{
    public:

        CMotor();
        ~CMotor();

    public:

        void setSpeed(float _Speed);
        void setDirection(int _Direction);

    private:

        float m_Speed;
        int   m_Direction;
};

#endif //ZEROGPARTS_MOTOR_H
