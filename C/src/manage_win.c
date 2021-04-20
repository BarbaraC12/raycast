#include "header.h"

void	initGlobal(void)
{
	g_window = NULL;
	g_renderer = NULL;
	g_game.isRunning = FALSE;
	g_game.ticksLastFrame = 0;
}

int		initWindow(void) {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		fprintf(stderr, "Error initializing SDL.\n");
		return FALSE;
	}
	g_window = SDL_CreateWindow(NULL, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGTH, SDL_WINDOW_BORDERLESS);
	if (!g_window) {
		fprintf(stderr, "Error creating SDL window.\n");
		return FALSE;
	}
	g_renderer = SDL_CreateRenderer(g_window, -1, 0);
	if (!g_renderer) {
		fprintf(stderr, "Error creating SDL renderer.\n");
		return FALSE;
	}
	SDL_SetRenderDrawBlendMode(g_renderer,SDL_BLENDMODE_BLEND);
	return TRUE;
}

void	destroyWindow(void) {
	SDL_DestroyRenderer(g_renderer);
	SDL_DestroyWindow(g_window);
	SDL_Quit();
}