#pragma once

#include "cTexture.h"

#define SCENE_Xo		(2*TILE_SIZE)
#define SCENE_Yo		TILE_SIZE
#define SCENE_WIDTH		40
#define SCENE_HEIGHT	20

#define FILENAME		"level"
#define FILENAME_EXT	".txt"

#define TILE_SIZE		32
#define BLOCK_SIZE		32

class cScene
{
public:
	cScene(void);
	virtual ~cScene(void);

	bool LoadLevel(int level);
	void Draw(int tex_id);
	int *GetMap();

private:
	int map[SCENE_WIDTH * SCENE_HEIGHT];	//scene
	int id_DL;								//actual level display list
};
