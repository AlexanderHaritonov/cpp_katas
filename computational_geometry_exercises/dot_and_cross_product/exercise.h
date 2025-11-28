#ifndef EXERCISE_H
#define EXERCISE_H

struct Vector3f{
    float x, y, z;
    
    Vector3f(float _x, float _y, float _z){
        x = _x; y = _y; z = _z;
    }
};

float dot_product(Vector3f a, Vector3f b);
Vector3f cross_product(Vector3f a, Vector3f b);
float scalerTripleProduct(Vector3f v1, Vector3f v2, Vector3f v3);

float calculate();

#endif // _EXERCISE_H