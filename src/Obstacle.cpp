#include "../include/Obstacle.h"

Obstacle::Obstacle()
{
    this->radius = 1.0;
    this->pos = new Vector2( 1.0, 1.0 );
    this->pushvel = 1.0;
}

Obstacle::~Obstacle()
{
    //dtor
}

Obstacle::Obstacle( float radius, Vector2 pos, float pushvel )
{
    this->radius = radius;
    this->pos = pos.Clone();
    this->pushvel = pushvel;
}
