#include "Particle.h"
#include<stdlib.h>


Particle::Particle(){
	m_x = (2.0 * rand()) / RAND_MAX - 1;
	m_y = (2.0 * rand()) / RAND_MAX - 1;
}

void Particle::update() {
	const double xspeed = 0.01*((2.0*rand()) / RAND_MAX - 1);
	const double yspeed = 0.01*((2.0*rand()) / RAND_MAX - 1);
	m_x += xspeed;
	m_y += yspeed;
}
Particle::~Particle(){

}
