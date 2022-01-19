#ifndef VECTOR2_H
#define VECTOR2_H


class Vector2
{
    public:
        Vector2();
        Vector2( float xc, float yc );
        virtual ~Vector2();

        void Set( Vector2 v );
        Vector2* Clone( void );
        void Add( Vector2 v, float s = 1.0f );
        Vector2* AddVectors( Vector2 a, Vector2 b );
        void Substract( Vector2 v, float s = 1.0f );
        Vector2* SubstractVectors( Vector2 a, Vector2 b );
        float Length( void );
        Vector2* Scale( float s );
        float Dot( Vector2 v );
        Vector2* Perp( void );


        float x;
        float y;

    protected:

    private:

};

#endif // VECTOR2_H
