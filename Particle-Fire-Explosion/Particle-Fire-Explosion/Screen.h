#pragma once
#include<SDL.h>
class Screen
{
public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;
private:
	SDL_Window * m_window;
	SDL_Renderer* m_renderer;
	SDL_Texture* m_texture;
	Uint32* m_buffer1;
	Uint32* m_buffer2;
public:
	Screen();
	void clear();
	bool init();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	void boxBlur();
	bool processEvents();
	void close();
	~Screen();
};

