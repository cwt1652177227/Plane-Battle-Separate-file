#pragma once
#include"Player.h"
#include"BulletMgr.h"
struct SGameMap
{
	SGameMap();
	//数据更新
	void update();
	//数据渲染
	void render();
	SPlayer player;
	SBulletMgr bulletMgr;
	
};

