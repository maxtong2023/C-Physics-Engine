#include "vec.h"
#include <cmath>
#include <iostream> 

vec::vec() : x(0.0), y(0.0){
    //default
}

vec::vec(double x, double y) : x(x), y(y){
    //initialze values
}

vec::vec(const vec& other) : x(other.x), y(other.y){
    //initialize from another vector
}
//getters and setters
double vec::getx() const{
    return x; 

}

double vec::gety() const{
    return y; 

}

void vec::setx(double newX){
    x = newX;
}
void vec::sety(double newY){
    y = newY;
}

void vec::set(double newX, double newY){
    x = newX;
    y = newY;
}

//arithmetic operations 
vec vec::operator+(const vec& other) const {
    // do we want to make a new vector or do we want to change the vector that we currently have?
    vec newvec = vec(x + other.x, y + other.y);
    return newvec;
}

vec vec::operator-(const vec& other) const{
    vec newvec = vec(x - other.x, y - other.y);
    return newvec; 
}

vec vec::operator*(double scalar) const{
    vec newvec = vec(x * scalar, y * scalar);
    return newvec; 
}

vec vec::operator/(double scalar) const{
    vec newvec = vec(x / scalar, y / scalar);
    return newvec; 
}


//compound assignments

vec& vec::operator+=(const vec& other){
    this->x += other.x; 
    this->y += other.y;
    return *this;  //reference to the instance of the vector that is calling the function.
}

vec& vec::operator-=(const vec& other){
    this->x -= other.x; 
    this->y -= other.y;
    return *this;  
}

vec& vec::operator*=(double scalar){
    this->x *= scalar; 
    this->y *= scalar;
    return *this;  
}

vec& vec::operator/=(double scalar){
    this->x /= scalar; 
    this->y /= scalar;
    return *this;  
}

//vector operations

double vec::dot(const vec& other){ 
    double xsum = x * other.x;
    double ysum = y * other.y; 
    return xsum + ysum; 

}

double vec::cross(const vec& other){
    double first = x * other.y; 
    double second = y * other.x; 

    return first - second; 
}

// properties

double vec::magnitude() const {
    return sqrt(pow(x, 2) + pow(y, 2));
}

//TODO: do the other properties