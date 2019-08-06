#include<iostream>
#include<SDL.h>
#include<math.h>
#include"Screen.h"
#include<stdlib.h>
#include<time.h>
#include"Swarm.h"
using namespace std;

int wmain() {

	srand(time(NULL));

	Screen screen;
	if (screen.init() == false) {
		cout << "Error initialising SDL." << endl;
	}
	screen.clear();

	Swarm swarm;
		
	while (true) {
		// Update Particles
		// Draw Particles

		
		int elapsed = SDL_GetTicks();
		screen.clear();
		swarm.update();
		unsigned char red = (1 + sin(elapsed*0.001)) * 128;
		unsigned char green = (1 + sin(elapsed*0.002)) * 128;
		unsigned char blue = (1 + sin(elapsed*0.003)) * 128;

		const Particle* const pParticles = swarm.getParticles();
		for (int i = 0; i < Swarm::NPARTICLES; i++) {
			Particle particle = pParticles[i];
			int x = (particle.m_x + 1)*Screen::SCREEN_WIDTH / 2;
			int y = (particle.m_y + 1)*Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
		}

		// Draw Screen
		screen.update();
		// Check for messages/events
		if (screen.processEvents() == false) {
			break;
		}
	}
	
	screen.close();

	cin.get();
	return 0;
}