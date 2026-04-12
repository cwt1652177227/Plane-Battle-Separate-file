#include "GameMgr.h"

SGameMgr::SGameMgr()
{
	nScene = E_GAME_MENU;
	bClear = false;
}

void SGameMgr::update()
{
	if (E_GAME_MENU == nScene) {
		gameMenu.update();
	}
	else if (E_GAME_MAP == nScene) {
		gameMap.update();
	}
}

void SGameMgr::render()
{
	if (E_GAME_MENU == nScene) {
		gameMenu.render();
	}
	else if (E_GAME_MAP == nScene) {
		gameMap.render();
	}
}
