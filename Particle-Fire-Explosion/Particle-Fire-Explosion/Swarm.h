#pragma once
#include"Particle.h"
class Swarm{
public:
	const static int NPARTICLES = 5000;
private:
	Particle * m_pParticles;
public:
	Swarm();
	const Particle* const getParticles() { return m_pParticles; }
	void update();
	~Swarm();
};

