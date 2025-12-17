#include "rigidbody.h"
#include <cmath>
#include <iostream> 

rigidbody::rigidbody(const vec& pos, double newmass){
    //constructor
    position  = pos; 
    mass = newmass;
    velocity = vec(0.0, 0.0);
    force = vec(0.0, 0.0);
    inverseMass = (mass > 0.0) ? 1.0 / mass : 0.0; 



}

void rigidbody::applyForce(const vec& newForce){
    force += newForce; 
}
void rigidbody::clearForce(){
    force = vec(0.0, 0.0);

}


void rigidbody::integrate(double dt){
    if (inverseMass == 0.0){
        return;
    }
    vec acceleration = force * inverseMass; 
    velocity = acceleration * dt; 
    position  = velocity * dt; 
    
}




