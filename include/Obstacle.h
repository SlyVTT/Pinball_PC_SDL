#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Vector2.h"

class Obstacle
{
    public:
        Obstacle();
        Obstacle( float radius, Vector2 pos, float pushvel );
        virtual ~Obstacle();

        float radius;
        Vector2* pos;
        float pushvel;

    protected:

    private:
};

#endif // OBSTACLE_H
