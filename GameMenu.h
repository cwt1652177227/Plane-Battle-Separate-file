#pragma once

enum {
	E_GAME_START,
	E_GAME_SET,
	E_GAME_EXIT
};
struct SGameMenu
{
	SGameMenu();
	//数据更新
	void update();
	//数据渲染
	void render();
	int nState;
};

