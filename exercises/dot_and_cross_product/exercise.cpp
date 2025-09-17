#include <iostream>

#include "exercise.h"

float dot_product(Vector3f a, Vector3f b){
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

Vector3f cross_product(Vector3f a, Vector3f b){
    float _x = a.y*b.z - b.y*a.z;
    float _y = - (a.x*b.z - a.z*b.x);
    float _z = a.x*b.y - b.x*a.y;
    return Vector3f(_x,_y,_z);
}


float scalerTripleProduct(Vector3f v1, Vector3f v2, Vector3f v3)
{
    return dot_product(v1, cross_product(v2, v3));
}

float calculate(){
    Vector3f a(4,5,6);
    Vector3f b(-1,3,8);
    Vector3f c(-6,5,-2);
    // Calculate and return the value of A . ( B x C ) + B . ( A X C ) + C . C  
    return scalerTripleProduct(a,b,c) + scalerTripleProduct(b,a,c) + dot_product(c,c);
}