#ifndef BALL_H
#define BALL_H

#include "Vector2.h"


class Ball
{
    public:
        Ball();
        Ball( float radius, float mass, Vector2 pos, Vector2 vel, float restitution );
        virtual ~Ball();

        void Simulate( float dt, Vector2 gravity );

        float radius;
        float mass;
        Vector2* pos;
        Vector2* vel;
        float restitution;

    protected:

    private:
};

#endif // BALL_H
