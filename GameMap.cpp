#include"stdafx.h"
#include "GameMap.h"
#include"Player.h"
#include"BulletMgr.h"
int arrMap[20][20]{
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};

SGameMap::SGameMap()
{
	player.setPosition(18, 9);
}

void SGameMap::update()
{
	if (KEY_DOWN(VK_ESCAPE)) {
		g_gameMgr.nScene = E_GAME_MENU;
		g_gameMgr.bClear = true;
	}
	if (KEY_DOWN(VK_UP))
	{
		if (player.nRow > 2)
		{
			player.nRow--;
			player.setPosition(player.nRow, player.nCol);
		}

	}
	else if (KEY_DOWN(VK_DOWN))
	{
		if (player.nRow < 18)
		{
			player.nRow++;
			player.setPosition(player.nRow, player.nCol);
		}
	}
	else if (KEY_DOWN(VK_LEFT))
	{
		if (player.nCol > 2)
		{
			player.nCol--;
			player.setPosition(player.nRow, player.nCol);
		}
	}
	else if (KEY_DOWN(VK_RIGHT))
	{
		if (player.nCol < 17)
		{
			player.nCol++;
			player.setPosition(player.nRow, player.nCol);
		}
	}
	else if (KEY_DOWN(VK_SPACE))
	{
		bulletMgr.addBullet(player.nRow, player.nCol);
	}
	
}

void SGameMap::render()
{
	
	//画数组
	for (int i = 0; i < 20; i++) {


		for (int j=0 ; j < 20; j++)
		{
			//画飞机
			bool bDrawPlayer = false;
			for (int n = 0; n < 4; n++) {
				if (player.arrPlane[n].nRow==i&& player.arrPlane[n].nCol ==j) {
					bDrawPlayer = true;
					break;
				}
			}
			//画子弹
			bool bDrawBullet = false;
			for (int n = 0; n < bulletMgr.vecBullet.size(); n++) {
				if (bulletMgr.vecBullet[n].nRow==i&& bulletMgr.vecBullet[n].nCol==j) {
					bDrawBullet = true;
				}
			}
			
			if (arrMap[i][j] == 0) {
				cout << "口";
			}
			else if (bDrawPlayer) {
				cout << "机";
			}
			else if (bDrawBullet) {
				cout << "弹";
			}
			else if (arrMap[i][j] == 1) {
				cout << "  ";
			}
		}
		cout << endl;
	}
}