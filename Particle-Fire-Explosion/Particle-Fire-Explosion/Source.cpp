#include<iostream>
#include<SDL.h>
using namespace std;

int wmain() {

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL init failed" << endl;
		return 1;
	}
	cout << "SDL init succeeded" << endl;
	SDL_Quit();

	cin.get();

	return 0;
}