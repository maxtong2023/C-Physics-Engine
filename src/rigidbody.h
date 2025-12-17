#ifndef rigidbody_h 
#define rigidbody_h

#include <cmath>
#include <iostream>
#include "vec.h"

class rigidbody{
    private:
        vec position; 
        vec velocity; 
        vec force; 

        double mass; 
        double inverseMass;  // wtf is this?

        rigidbody(const vec& pos, double mass);

        void applyForce(const vec& newForce);
        void clearForce();

        void integrate(double dt);
        



};
#endif 