//
//  shapeMaterial.cpp
//  mySketch
//

#include "shapeMaterial.h"

//Awesome spring color chart!
Color::Color(){
    int x = rand() % 5;
    switch (x) {
        case 0:
            this->r = 154;
            this->g = 142;
            this->b = 195;
            break;
            
        case 1:
            this->r = 245;
            this->g = 178;
            this->b = 178;
            break;
            
        case 2:
            this->r = 175;
            this->g = 221;
            this->b = 231;
            break;
            
        case 3:
            this->r = 168;
            this->g = 209;
            this->b = 138;
            break;
            
        case 4:
            this->r = 245;
            this->g = 229;
            this->b = 169;
            break;
        default:
            break;
    }
}

ShapeMaterial::ShapeMaterial(){
    this->x = 0;
    this->y = 0;
}

ShapeMaterial::ShapeMaterial(float x, float y){
    this->x = x;
    this->y = y;
};

void ShapeMaterial::move(float dx, float dy){
    this->x += dx;
    this->y += dy;
}

void ShapeMaterial::setX(float x){
    this->x = x;
}

void ShapeMaterial::setY(float y){
    this->y = y;
}

CircleMaterial::CircleMaterial() : ShapeMaterial() {
    this->r = 0;
}

CircleMaterial::CircleMaterial(float x, float y, float r) : ShapeMaterial(x, y){
    this->r = r;
}

void CircleMaterial::setR(float r){
    this->r = r;
}

void CircleMaterial::shrink(){
    if(this->r > 1){
        this->r -= 1;
    }else{
        this->r = 0;
    }
}

void CircleMaterial::shrink(float dr){
    if(this->r > dr){
        this->r -= dr;
    }else{
        this->r = 0;
    }
}
