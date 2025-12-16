#ifndef vec_h
#define vec_h


#include <cmath>
#include <iostream>

// some questions: 
// 1. Why is const defined after a function definiton? What is the point of this 
    // - const after a function definition is meant to force the compiler to understand that the function is read only. It's good practice. 
// 2. vec(const vec& other); What is the purpose of this constructor?


class vec {
    private: 
        double x; 
        double y;

    public:
        vec();
        vec(double x, double y);
        vec(const vec& other);

        //getters 

        double getx() const;
        double gety() const; 
        void setx(double x); 
        void sety(double y);
        void set(double x, double y);


        // Arithmetic operations

        vec operator+(const vec& other) const;  //what does the & mean in this context? Reference to the vector? 
        vec operator-(const vec& other) const; 
        vec operator*(double scalar) const; 
        vec operator/(double scalar) const; 
        vec operator-() const; 

        // Compound assignments

        vec& operator+=(const vec& other); 
        vec& operator-=(const vec& other); 
        vec& operator*=(double scalar); 
        vec& operator/=(double scalar); 

        // vector operations

        double dot(const vec& other); 
        double cross(const vec& other);

        //properties

        double magnitude() const;
        vec normalize() const; 
        void normalizeInPlace() const; 

        // rotation

        vec rotate(double angle) const; // In radians
        void rotateInPlace(double angle); 
        vec getPerp() const; 

        //vector projections 

        vec project(const vec& onto) const; 
        vec reject(const vec& from ) const; 

        //comparison

        bool operator==(const vec& other) const; 
        bool operator!=(const vec& other) const; 

};

#endif