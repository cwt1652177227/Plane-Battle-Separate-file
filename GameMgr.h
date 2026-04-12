#pragma once
#include"GameMenu.h"
#include"GameMap.h"

enum {
	E_GAME_MENU,
	E_GAME_MAP
};

struct SGameMgr
{
	SGameMgr();
	//数据更新
	void update();
	//数据渲染
	void render();
	int nScene;
	bool bClear;
	SGameMap gameMap;
	SGameMenu gameMenu;
};

