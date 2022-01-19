#include "../include/Vector2.h"
#include <math.h>

Vector2::Vector2()
{
    this->x = 0.0f;
    this->y = 0.0f;
};

Vector2::Vector2( float xc, float yc )
{
    this->x = xc;
    this->y = yc;
};

Vector2::~Vector2()
{

};

void Vector2::Set( Vector2 v )
{
    this->x = v.x;
    this->y = v.y;
};

Vector2* Vector2::Clone( void )
{
    return new Vector2( this->x, this->y );
};

void Vector2::Add( Vector2 v, float s )
{
    this->x += v.x * s;
    this->y += v.y * s;
};

Vector2* Vector2::AddVectors( Vector2 a, Vector2 b )
{
    this->x = a.x + b.x;
    this->y = a.y + b.y;
    return this;
};

void Vector2::Substract( Vector2 v, float s )
{
    this->x -= v.x * s;
    this->y -= v.y * s;
};

Vector2* Vector2::SubstractVectors( Vector2 a, Vector2 b )
{
    this->x = a.x - b.x;
    this->y = a.y - b.y;
    return this;
};

float Vector2::Length( void )
{
    return sqrt( this->x * this->x + this->y * this->y );
};

Vector2* Vector2::Scale( float s )
{
    this->x *= s;
    this->y *= s;
    return this;
};

float Vector2::Dot( Vector2 v )
{
    return ( this->x * v.x + this->y * v.y );
};

Vector2* Vector2::Perp( void )
{
    return new Vector2( -this->y, this->x );
};


