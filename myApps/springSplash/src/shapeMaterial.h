//
//  shapeMaterial.h
//  mySketch
//
#include "random"

#ifndef shapeMaterial_h
#define shapeMaterial_h

class Color {
public:
    int r;
    int g;
    int b;
    
    Color();
};

class ShapeMaterial {
    
public:
    float x;
    float y;
    Color color;
    
    ShapeMaterial();
    ShapeMaterial(float x, float y);
    void setX(float x);
    void setY(float y);
    void move(float dx, float dy);
};


class CircleMaterial : public ShapeMaterial {
public:
    float r;
    
    CircleMaterial();
    CircleMaterial(float x, float y, float r);
    void setR(float r);
    void shrink();
    void shrink(float dr);

};

#endif /* shapeMaterial_h */
