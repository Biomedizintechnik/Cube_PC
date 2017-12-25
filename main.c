#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cube.h"
#include "draw.h"
#include "draw_3d.h"
#include "effect.h"
#include "gameoflife.h"

void *cube_updater (unsigned char rs232_cube[8][8]);

int main (int argc, char **argv)
{

	cube_init();

	pthread_t cube_thread;
	int iret, i, x;

	iret = pthread_create (&cube_thread, NULL, cube_updater, rs232_cube);


	while (1)
	{
		printf("Effect: path_text\n");
		effect_path_text(2000, "HIT  2018");
		printf("Effect: linespin\n");
		linespin(2000,100);
		printf("Effect: stringfly");
		effect_stringfly2("HIT 2018");
		printf("Effect: stringfly");
		effect_stringfly2("HIT 2018");
		effect_smileyspin (100, 100, bitmaps[0])
	}

}

void *cube_updater (unsigned char rs232_cube[8][8])
{
    unsigned char pushcube[8][8];


	while (1)
    {
        memcpy(pushcube, rs232_cube, 64);
		cube_push(pushcube);
    }
}


