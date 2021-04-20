#ifndef HEADER_H
# define HEADER_H

# define TRUE				1
# define FALSE				0

# define WIDTH				800
# define HEIGTH				600

# define FPS				30
# define FRAME_TIME_LENGTH	(1000/ FPS)


# include <SDL2/SDL.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>

typedef struct 	s_data {
	int	playerX;
	int	playerY;
	int		isRunning;
	int		ticksLastFrame;
}				t_data;


SDL_Window*		g_window;
SDL_Renderer*	g_renderer;
t_data			g_game;

void	initGlobal(void);
int		initWindow(void);
void	destroyWindow(void);

void	render();
void	update();
void	processInput();
void	setup();

#endif