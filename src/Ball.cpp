#include "../include/Ball.h"

Ball::Ball()
{
    this->radius = 1.0;
    this->mass = 1.0;
    this->pos = new Vector2( 0, 0 );
    this->vel = new Vector2( 0, 0 );
    this->restitution = 1.0;
}

Ball::~Ball()
{
    delete(pos);
    delete(vel);
}

Ball::Ball( float radius, float mass, Vector2 pos, Vector2 vel, float restitution )
{
    this->radius = radius;
    this->mass = mass;
    this->pos = pos.Clone();
    this->vel = vel.Clone();
    this->restitution = restitution;
}

void Ball::Simulate( float dt, Vector2 gravity )
{
    this->vel->Add( gravity, dt );
    this->pos->Add( *this->vel, dt );
}
